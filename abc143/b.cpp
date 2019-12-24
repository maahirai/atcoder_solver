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
    cin>>n;
    vector<int> takoyaki(n);
    rep(i,n)cin>>takoyaki.at(i);
    ll ans=0;
    rep(i,n){
        rep(j,n){
            if(i==j)continue;
            else{
                ans+=takoyaki.at(i)*takoyaki.at(j);
            }
        }
    }
    cout<<ans/2<<endl;
    return 0;
}


