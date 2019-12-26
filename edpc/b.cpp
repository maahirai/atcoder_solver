#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int n,k;
int main(){
    cin>>n>>k;
    vector<int> height(n);
    rep(i,n)cin>>height.at(i);
    vector<ll> cost(n+10000);
    rep(i,n+1)cost.at(i)=INF;
    cost.at(0)=0;
    rep(i,n){
        for(int j=1;j<=k;j++){
        if(((i-j)>=0))chmin(cost.at(i),cost.at(i-j)+abs(height.at(i)-height.at(i-j)));
        }
    }
    cout<<cost.at(n-1)<<endl;
    return 0;
}


