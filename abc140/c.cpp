#include<bits/stdc++.h>
using namespace std;

typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep2(i, begin_i, end_i) for (int i = (int)begin_i; i <= (int)end_i; i++)

long long INF = 1LL<<60;
long long dp[100010];
int h[100010];
int n;
int main(){
    cin>>n;
    vector<int> b(n-1);
    rep(i,n-1)cin>>b.at(i);
    vector<int>a(n);
    a.at(0)=b.at(0);
    a.at(n-1)=b.at(n-2);
    rep2(i,1,n-2)a.at(i)=min(b.at(i),b.at(i-1));
    ll ans=0;
    rep(i,n)ans+=a.at(i);
    cout<<ans<<endl;
    return 0;
}


