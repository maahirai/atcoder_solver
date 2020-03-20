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

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int main( ){
    int n;
    cin>>n;
    int x[n],y[n],h[n];
    rep(i,n){
        cin>>x[i]>>y[i]>>h[i];
    }
    int tmp;
    rep(j,101){
        rep(k,101){
            bool che=true;
            bool ans=false;
            rep(l,n){
                if(che&&h[l]>=1){tmp=h[l]+abs(x[l]-j)+abs(y[l]-k);che=false;ans=true;}
                else{
                    if(h[l]==0||tmp==h[l]+abs(x[l]-j)+abs(y[l]-k))continue;
                    else {ans=false; break;}
                }
            }
                if(ans){
                    int c=true;
                    rep(m,n){
                        if(h[m]==0){
                            if(tmp-abs(x[m]-j)-abs(y[m]-k)<=0)continue;
                            else {c=false;break;}
                        }
                    }
                    if(c){cout<<j<<" "<<k<<" "<<tmp<<endl;
                        return 0;
                        }
                }
        }
    }
    return 0;
}


