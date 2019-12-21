#include<bits/stdc++.h>
using namespace std;

typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep2(i, begin_i, end_i) for (int i = (int)begin_i; i < (int)end_i; i++)

long long INF = 1LL<<60;
long long dp[100010];
int h[100010];
int n,m;
int main(){
    cin>>n>>m;
    vector<int> x(m);
    vector<int> dist(m);
    rep(i,m)cin>>x.at(i);
    if(n>=m){cout<<0<<endl;return 0;}
    sort(x.begin(),x.end());
    rep(i,m-1)dist.at(i)=x.at(i+1)-x.at(i);
    sort(dist.begin(),dist.end(),greater<int>());
    ll ans=x.at(m-1)-x.at(0);
    ll temp=0;
    rep(i,n-1){temp+=dist.at(i);}
    cout<<ans-temp<<endl;
    return 0;
}
