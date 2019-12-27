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
int n,w;
int main(){
    cin>>n>>w;
    int weight[w];
    int value[w];
    rep(i,n)cin>>weight[i]>>value[i];
    ll dp[n+10][w+10];
    rep(i,n+10)rep(j,w+10)dp[i][j]=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=w;j++){
           if(j-weight[i]>=0)chmax(dp[i+1][j],dp[i][j-weight[i]]+value[i]);

           chmax(dp[i+1][j],dp[i][j]);
        }
    }
    cout<<dp[n][w]<<endl;
    return 0;
}


