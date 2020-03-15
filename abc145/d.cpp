#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
using vll=vector<ll>;
using vi=vector<int>;

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
ll mod=1e9+7;
long long INF = 1LL<<60;

ll dx, dy;
int main( ){
    cin>>dx>>dy;
    if(dy>dx)swap(dx,dy);
    ll cdx=dx,cdy=dy;
    ll t=dx-dy;
    ll y=(cdy-t)/3,x=y+t;
    if(2*x+y!=dx||x+2*y!=dy||x<0||y<0){
        cout<<0<<endl;
    }
    else {
        ll bunshi=1;
        ll bunbo=1;
        rep(i,1,x+y+1){
            bunshi*=i;
            bunshi%=mod;
            if(bunshi<0)bunshi+=mod;
        }
        rep(i,1,x+1){
            bunbo*=i;
            bunbo%=mod;
            if(bunbo<0)bunbo+=mod;
        }
        rep(i,1,y+1){
            bunbo*=i;
            bunbo%=mod;
            if(bunbo<0)bunbo+=mod;
        }
        ll ans=bunshi*modinv(bunbo,mod)%mod;
        if(ans<0)ans+=mod;
        cout<<ans<<endl;
    }
    return 0;
}


