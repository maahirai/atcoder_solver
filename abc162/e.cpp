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

template<class T> inline T C(T x,T y){
    if(x<y)return 0;
    T div=min(x-y,y);
    T v=max(x-y,y);
    ll bunbo=1,bunshi=1;
    irep(i,x-div+1,x+1){
        bunshi*=i;
    }
    rep(j,1,div+1){
        bunbo*=j;
    }
    return bunshi/bunbo;
}
template<class T> inline T modC(T x,T y,ll mod){
    if(x<y)return 0;
    T div=min(x-y,y);
    ll bunbo=1,bunshi=1;
    irep(i,x-div+1,x+1){
        bunshi*=i;
        bunshi%=mod;
        if(bunshi<0)bunshi+=mod;
    }
    rep(j,1,div+1){
        bunbo*=j;
        bunbo%=mod;
        if(bunbo<0)bunbo+=mod;
    }
    T ans=bunshi*modinv(bunbo,mod)%mod;
    if(ans<0)ans+=mod;
    return ans;
}
long long INF = 1LL<<60;
int main( ){
    ll N,K;
    cin>>N>>K;
    ll mod=1e9+7;
    vll gcdres(K+1,0);
    irep(i,1,K+1){
        ll quem=K/i;
        gcdres[i]=modpow(quem,N,mod)%mod;
        if(gcdres[i]<0)gcdres[i]+=mod;
        if(quem>=2){
            rep(j,2,quem+1){
                gcdres[i]-=gcdres[i*j];
                gcdres[i]%=mod;
                if(gcdres[i]<0)gcdres[i]+=mod;
            }
        }
    }
    ll ans=0;
    rep(i,1,K+1){
        ans+=gcdres[i]*i%mod;
        ans%=mod;
        if(ans<0)ans+=mod;
    }
    cout<<ans<<endl;
    return 0;
}


