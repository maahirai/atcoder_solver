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
    ll cpyx=x;
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
long long INF = 1LL << 60;
int main()
{
    ll A, B;
    cin >> A >> B;
    ll GCD = gcd(A, B);
    //1の分
    ll cnt = 1;
    vector<pair<ll, ll>> pf = primefact(GCD);
    cnt += pf.size();
    cout << cnt << endl;
    return 0;
}
