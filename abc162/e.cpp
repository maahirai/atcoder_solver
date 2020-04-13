#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
using vll=vector<ll>;
using vi=vector<int>;
using vvi=vector<vector<int>>;
using vb=vector<bool>;
using pii=pair<int,int>;

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
ll fact[100010];
ll mod=1e9+7;
#define MAX 100010
ll Sorce[MAX];
void modcInit(ll i){
    fact[0]=1;
    rep(j,1,i+1){
        fact[j]=fact[j-1]*j;
        fact[j]%=mod;
    }
}
ll modc(ll n,ll x){
    return fact[n]*modinv(fact[n-x]*fact[x]%mod,mod)%mod;
}

int main( ){
    ll n,k;cin>>n>>k;
    vll res(k+1,0);
    irep(i,1,k+1){
        ll quem=k/i;
        res[i]=modpow(quem,n,mod)%mod;
        rep(p,2,quem+1){
            res[i]-=res[p*i];
            res[i]%=mod;
        }
    }
    ll ans=0;
    rep(i,1,k+1){
        ans+=res[i]*i%mod;
        ans%=mod;
    }
    cout<<ans<<endl;
    return 0;
}


