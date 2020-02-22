#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
using vll=vector<ll>;
using vi=vector<int>;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

template<class T> inline T gcd(T x,T y){if(y==0)return x; else {return gcd(y,x%y);}}
template<class T> inline T lcm(T x,T y){return x/gcd(x,y)*y;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)
ll mod=1e9+7;
template<class T> ll llpow(T x,T n){ll ans=1;if(x==0)ans=0;while(n){if(n&1)ans*=x;ans%=mod;
if(ans<0)ans+=mod;
x*=x;n>>=1;}return ans;}

long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}
long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}
ll fact(ll x){
    ll ans=1;
    while(x){
        ans*=x--;
        ans%=mod;
        if(ans<0)ans+=mod;
    }
    return ans;
}
ll c(ll x,ll y){
    ll res=1;
    ll tmp=x;
    while(tmp>=(x-y+1)){
        res*=tmp--;
        res%=mod;
        if(res<0)res+=mod;
    }
    return res*modinv(fact(y),mod)%mod;
}
long long INF = 1LL<<60;
int main(){
    ll n;
    cin>>n;
    ll a,b;
    cin>>a>>b;
    ll res=modpow(2LL,n,mod)-1;
    res-=(c(n,a));
    res%=mod;
    if(res<0)res+=mod;
    res-=(c(n,b));
    res%=mod;
    if(res<0)res+=mod;
    cout<<res<<endl;
    return 0;
}


