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
int n;
int main(){
    int k;
    cin>>n>>k;
    if(n<=k){
        cout<<0<<endl;
        return 0;
    }
    vector<int> h(n);
    rep(i,n)cin>>h[i];
    sort(h.begin(),h.end(),greater<int>());
    rep(i,k)h[i]=0;
    ll ans=0;
    rep(i,n)ans+=h[i];
    cout<<ans<<endl;
    return 0;
}


