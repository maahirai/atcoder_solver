#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

template<class T> ll llpow(T x,T n){ll ans=1;if(x==0)ans=0;while(n){if(n&1)ans*=x;x*=x;n>>=1;}return ans;}
template<class T> inline T gcd(T x,T y){if(y==0)return x; else {return gcd(y,x%y);}}
template<class T> inline T lcm(T x,T y){return x/gcd(x,y)*y;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    rep(i,n){cin>>a[i];if(a[i]==0){cout<<n<<endl;return 0;}}
    ll tmpp=1;
    ll len=0;
    int r=0;
    for(int l=0;l<n;l++){
        while(r<n&&tmpp*a[r]<=k){
            tmpp*=a[r];r++;
        }
        chmax(len,ll(r-l));
        if(r==l){
            r++;
        }
        else{
            tmpp/=a[l];
        }
    }
    cout<<len<<endl;
    return 0;
}


