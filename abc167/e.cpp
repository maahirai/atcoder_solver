#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
using vll=vector<ll>;
using vvll=vector<vll>;
using vi=vector<int>;
using vvi=vector<vector<int>>;
using vb=vector<bool>;
using pii=pair<int,int>;
using vpii=vector<pair<int,int>>;
using plli=pair<ll,int>;
using vplli=vector<pair<ll,int>>;
using pllll=pair<ll,ll>;
using vpllll=vector<pair<ll,ll>>;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

//pow(llpow,modpow)
template<class T> ll llpow(ll x,T n){ll ans=1;if(x==0)ans=0;while(n){if(n&1)ans*=x;x*=x;n>>=1;}return ans;}
long long modpow(long long a, long long n, long long mod) {long long res = 1;while (n > 0) {if (n & 1) res = res * a % mod;a = a * a % mod;n >>= 1;}return res;}
//最大公約数
template<class T> inline T gcd(T x,T y){if(y==0)return x; else {return gcd(y,x%y);}}
//最小公倍数
template<class T> inline T lcm(T x,T y){return x/gcd(x,y)*y;}
//逆元
long long modinv(long long a, long long m) {long long b = m, u = 1, v = 0;while (b) {long long t = a / b;a -= t * b; swap(a, b);u -= t * v; swap(u, v);}u %= m;if (u < 0) u += m;return u;}

#define rep(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)
//試験導入
#define irep(i, end_i, begin_i) for (ll i = (ll)begin_i-1; i >= (ll)end_i; i--)

long long INF = 1LL<<60;
//最初に設定する.
const ll MOD=998244353;
const int  MAX = 510000;
long long fac[MAX], finv[MAX], inv[MAX];  void modcinit() { fac[0] = fac[1] = 1; finv[0] = finv[1] = 1; inv[1] = 1; for (int i = 2; i < MAX; i++){ fac[i] = fac[i - 1] * i % MOD; inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD; finv[i] = finv[i - 1] * inv[i] % MOD; } } long long modc(int n, int k){ if (n < k) return 0; if (n < 0 || k < 0) return 0; return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD; }
int main( ){
    modcinit();
    ll N,M;
    ll K;
    cin>>N>>M>>K;
    ll ans=0;
    ll mod=MOD;
    rep(i,0,K+1){
       ll add=((M*modc(N-1,i)%mod+mod)%mod*modpow(M-1,N-1-i,mod)%mod+mod)%mod;
       ans=((add+ans)%mod+mod)%mod;
    }
    cout<<ans<<endl;
    return 0;
}


