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
    ll n;
    cin>>n;
    ll canride[5];
    rep(i,5)cin>>canride[i];
    int mini=0;
    rep(i,5)if(canride[i]<canride[mini]){
        mini=i;
    }
    cout<<4+(n+canride[mini]-1)/canride[mini]<<endl;
    return 0;
}


