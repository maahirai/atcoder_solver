#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using vll = vector<ll>;
using vvll = vector<vll>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vb = vector<bool>;
using pii = pair<int, int>;
using vpii = vector<pair<int, int>>;
using vpllll = vector<pair<ll, ll>>;

template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}

//pow(llpow,modpow)
template <class T>
ll llpow(ll x, T n)
{
    ll ans = 1;
    if (x == 0)
        ans = 0;
    while (n)
    {
        if (n & 1)
            ans *= x;
        x *= x;
        n >>= 1;
    }
    return ans;
}
long long modpow(long long a, long long n, long long mod)
{
    long long res = 1;
    while (n > 0)
    {
        if (n & 1)
            res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}
//最大公約数
template <class T>
inline T gcd(T x, T y)
{
    if (y == 0)
        return x;
    else
    {
        return gcd(y, x % y);
    }
}
//最小公倍数
template <class T>
inline T lcm(T x, T y) { return x / gcd(x, y) * y; }
//逆元
long long modinv(long long a, long long m)
{
    long long b = m, u = 1, v = 0;
    while (b)
    {
        long long t = a / b;
        a -= t * b;
        swap(a, b);
        u -= t * v;
        swap(u, v);
    }
    u %= m;
    if (u < 0)
        u += m;
    return u;
}

#define rep(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)
//試験導入
#define irep(i, end_i, begin_i) for (ll i = (ll)begin_i - 1; i >= (ll)end_i; i--)

long long INF = 1LL << 60;
template <class T>
bool is_prime(T IN)
{
    if (IN <= 1)
        return false;
    for (long long i = 2; i * i <= IN; i++)
    {
        if (IN % i == 0)
        {
            return false;
        }
    }
    return true;
}
template <class T>
vector<pair<long long, long long>> primefact(T x)
{
    vector<pair<long long, long long>> ret;
    ll cpyx = x;
    for (long long i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            vector<long long> alt = {i, x / i};
            if (alt[0] == alt[1])
                alt[1] = 1;
            for (long long j = 0; j < alt.size(); j++)
            {
                if (is_prime(alt[j]))
                {
                    pair<long long, long long> t = make_pair(alt[j], 0);
                    while (cpyx % alt[j] == 0)
                    {
                        cpyx /= alt[j];
                        t.second++;
                    }
                    ret.push_back(t);
                }
            }
        }
    }
    return ret;
}
const int MAX = 510000;
const int MOD = 1000000007;
long long fac[MAX], finv[MAX], inv[MAX];
void modcinit()
{
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++)
    {
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}
long long modc(int n, int k)
{
    if (n < k)
        return 0;
    if (n < 0 || k < 0)
        return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main()
{
    ll n, m;
    cin >> n >> m;
    ll mod = 1e9 + 7;
    vpllll pf = primefact(m);
    ll ans = 1;
    modcinit();
    for (auto e : pf)
    {
        ans *= modc(e.second + n - 1, n - 1);
        ans %= mod;
        if (ans < 0)
            ans += mod;
    }
    cout << ans << endl;
    return 0;
}
