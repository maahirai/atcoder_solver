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
long long mi = -(1LL<<60);
int n;
int main(){
    cin>>n;
    int happiness[3][n];
    rep(i,n)rep(j,3)cin>>happiness[j][i];
    ll dp[3][n+10];
    rep(i,3)rep(j,n+5)dp[i][j]=mi;
    dp[0][0]=happiness[0][0];
    dp[1][0]=happiness[1][0];
    dp[2][0]=happiness[2][0];
    rep2(i,1,n){
        rep(j,3){
        if(j!=0)chmax(dp[j][i],dp[0][i-1]+happiness[j][i]);
        if(j!=1)chmax(dp[j][i],dp[1][i-1]+happiness[j][i]);
        if(j!=2)chmax(dp[j][i],dp[2][i-1]+happiness[j][i]);
        }
    }

    cout<<max({dp[0][n-1],dp[1][n-1],dp[2][n-1]})<<endl;
    return 0;
}


