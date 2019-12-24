#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
ll n,m;

int main(){
    cin>>n>>m;
    vector<int> l(m+10),r(m+10);
    for(int i=1;i<=m;i++){cin>>l.at(i)>>r.at(i);}
    int start=1;
    int end=n;
    for(int i=1;i<=m;i++){
        if(l.at(i)>start)start=l.at(i);
        if(r.at(i)<end)end=r.at(i);
    }
    int ans=end-start+1;
    cout<<max(ans,0)<<endl;
    return 0;
}
