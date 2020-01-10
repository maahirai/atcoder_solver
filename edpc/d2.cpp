#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
//自作関数
template<class T> ll llpow(T x,T n){ll ans=1;while(n--){ans*=x;}return ans;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int n;
int main(){
    int W;
    cin>>n>>W;
    int w[n],v[n];
    rep(i,n){
       cin>>w[i]>>v[i];
    }
    ll dp[W+1];
    rep(i,W+1)dp[i]=0;
    for(int i=0;i<n;i++){
        for(int j=W;j>=0;j--){
            if((j-w[i])>=0)chmax(dp[j],dp[j-w[i]]+v[i]);
        }
    }
    cout<<dp[W]<<endl;
    return 0;
}


