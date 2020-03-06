#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
using vll=vector<ll>;
using vi=vector<int>;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

//pow(llpow,modpow)
template<class T> ll llpow(T x,T n){ll ans=1;if(x==0)ans=0;while(n){if(n&1)ans*=x;x*=x;n>>=1;}return ans;}
long long modpow(long long a, long long n, long long mod) {long long res = 1;while (n > 0) {if (n & 1) res = res * a % mod;a = a * a % mod;n >>= 1;}return res;}
//最大公約数
template<class T> inline T gcd(T x,T y){if(y==0)return x; else {return gcd(y,x%y);}}
//最小公倍数
template<class T> inline T lcm(T x,T y){return x/gcd(x,y)*y;}
//逆元
long long modinv(long long a, long long m) {long long b = m, u = 1, v = 0;while (b) {long long t = a / b;a -= t * b; swap(a, b);u -= t * v; swap(u, v);}u %= m;if (u < 0) u += m;return u;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int main(){
    int w,h,n;
    cin>>w>>h>>n;
    vi x(n),y(n),a(n);
    rep(i,n)cin>>x[i]>>y[i]>>a[i];
    int rx=w,by=h,lx=0,sy=0;
    rep(i,n){
        if(a[i]==1){
            if(lx<x[i])lx=x[i];
            }
        else if(a[i]==2){
            if(rx>x[i])rx=x[i];
            }
        else if(a[i]==3){
            if(sy<y[i])sy=y[i];
            }
        else {
            if(by>y[i])by=y[i];
            }
        if(by<=sy||rx<=lx){cout<<"0"<<endl; return 0;}
    }
    cout<<(by-sy)*(rx-lx)<<endl;
    return 0;
}


