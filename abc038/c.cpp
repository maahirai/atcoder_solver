#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
using vll=vector<ll>;
using vi=vector<int>;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

template<class T> ll llpow(T x,T n){ll ans=1;if(x==0)ans=0;while(n){if(n&1)ans*=x;x*=x;n>>=1;}return ans;}
template<class T> inline T gcd(T x,T y){if(y==0)return x; else {return gcd(y,x%y);}}
template<class T> inline T lcm(T x,T y){return x/gcd(x,y)*y;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

template<class T> void coe(T x){cout<<x<<endl;}

long long INF = 1LL<<60;
int main(){
    int n;
    cin>>n;
    vi a(n);
    rep(i,n)cin>>a[i];
    ll res=0;
    int r=1;
    for(int l=0;l<n;l++){
        while(r<n&&(r<=l||a[r-1]<a[r])){
            r++;
        }
        res+=(r-l);
        if(r==l)r++;
    }
    coe(res);
    return 0;
}


