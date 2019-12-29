#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
//自作関数
template<class T> ll llpow(T x,T n){ll ans=1;while(n--){ans*=x;}return ans;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

int INF = 1<<30;
int n,w;
int main(){
    cin>>n>>w;
    int weight[n];
    int value[n];
    rep(i,n)cin>>weight[i]>>value[i];
    int dp[n+10][1000*n+10];
    rep(i,n+1){
        rep(j,1000*n+1){dp[i][j]=INF;}
    }
    dp[0][0]=0;
    for(int i=0;i<n;i++){
        for(int sumv=0;sumv<=(1000*n);sumv++){
            if(sumv-value[i]>=0)chmin(dp[i+1][sumv],dp[i][sumv-value[i]]+weight[i]);
            chmin(dp[i+1][sumv],dp[i][sumv]);
        }
    }
    int ans=0;
    rep(i,1000*n+1){
        if(dp[n][i]<=w){
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}


