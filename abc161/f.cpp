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
using pllll = pair<ll, ll>;

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

vector<ll> yakusu(ll x){
    vll ret;
    for(ll i=1;i*i<=x;i++){
        if(x%i==0){
            if(i!=x/i)
            ret.push_back(i);
            ret.push_back(x/i);
        }
    }
    return ret;
}

int main()
{
    ll n;
    cin >> n;
    ll ans = 0;
    unordered_map<ll, int> mp;
    vll first=yakusu(n-1);
    for(ll t:first){
        if(mp.count(t)==0&&t!=1){
            ans++;
            mp[t]++;
        }
    }
    //nの約数のうち，操作を行なって最終的にnが1になる数
    vll second=yakusu(n);
    for(ll t:second){
        if(mp.count(t)==0&&t!=1){
            ll cp=n;
            while(cp%t==0){
                cp/=t;
            }
            cp%=t;
            if(cp==1){
                ans++;
                mp[t]++;
            }
       }
    }
    cout << ans << endl;
    return 0;
}
