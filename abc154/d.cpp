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
    vector<int> p(n);
    int be=0;
    rep(i,n){cin>>p[i];if(be<p[i])be=p[i];}
    int sum[be+1];
    sum[0]=0;
    rep(i,be){
        sum[i+1]=sum[i]+i+1;
    }
    vector<double> e(n,0);
    rep(i,n){
        e[i]=sum[p[i]]/(double)p[i];
    }
    vector<double> tosum(n+1,0);
    rep(i,n){
        tosum[i+1]=tosum[i]+e[i];
    }
    double tmp=0;
    rep(i,n-k+1){
        double t=tosum[i+k]-tosum[i];
        if(tmp<t)tmp=t;
    }
    printf("%.10lf",tmp);
}