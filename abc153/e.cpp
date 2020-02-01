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
int INFi = 1<<30;
int wid=20000;
int main(){
    int h,n;
    cin>>h>>n;
    vector<int> a(n),b(n);
    rep(i,n)cin>>a[i]>>b[i];
    int dp[h+1];
    rep(i,h+1)dp[i]=INFi;
    dp[0]=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<h;j++){
            int mj=min(j+a[i],h);
            chmin(dp[mj],dp[j]+b[i]);
        }
    }
    cout<<dp[h]<<endl;
    return 0;
}


