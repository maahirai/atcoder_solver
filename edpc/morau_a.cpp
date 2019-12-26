#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int main(){
    int n;
    cin>>n;
    vector<int> height(n);
    rep(i,n)cin>>height.at(i);
    ll cost[n];
    rep(i,n)cost[i]=INF;
    cost[0]=0;
    cost[1]=abs(height.at(1)-height.at(0));
    for(int now=2;now<n;now++){
    chmin(cost[now],abs(height[now]-height[now-1])+cost[now-1]);
    chmin(cost[now],abs(height[now]-height[now-2])+cost[now-2]);
    }
    cout<<cost[n-1]<<endl;
    return 0;
}


