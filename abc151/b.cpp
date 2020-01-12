#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int n;
int main(){
    int k,m;
    cin>>n>>k>>m;
    vector<int> a(n-1);
    rep(i,n-1)cin>>a[i];
    int sum=0;
    rep(i,n-1)sum+=a[i];
    int want=n*m-sum;
    if(want<=0)cout<<0<<endl;
    else if(want<=k)cout<<want<<endl;
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}


