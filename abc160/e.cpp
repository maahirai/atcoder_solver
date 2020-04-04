#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
using vll=vector<ll>;
using vi=vector<int>;
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

long long INF = 1LL<<60;
vi ea(100000,0),eb(100000,0),ec(100000,0);
ll x,y,a,b,c;
int main( ){
    cin>>x>>y>>a>>b>>c;
    rep(i,0,a)cin>>ea[i];
    rep(i,0,b)cin>>eb[i];
    rep(i,0,c)cin>>ec[i];
    sort(ea.begin(),ea.end(),greater<int>());
    sort(eb.begin(),eb.end(),greater<int>());
    sort(ec.begin(),ec.end(),greater<int>());
    vll res;
    rep(i,0,x)res.push_back(ea[i]);
    rep(i,0,y)res.push_back(eb[i]);
    rep(i,0,c)res.push_back(ec[i]);
    sort(res.begin(),res.end(),greater<int>());
    ll ans=0;
    rep(i,0,x+y){
      ans+=res[i];
    }
    cout<<ans<<endl;
    return 0;
}

