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
int n,m;
int main(){
    cin>>n>>m;
    ll div=1e9+7;
    vector<bool> skip(n+10,false);
    vector<ll> way(n+10);
    rep(i,m){
        int temp;
        cin>>temp;
        skip.at(temp)=true;
    }
    way.at(0)=1;
    for(int i=1;i<=n;i++){
        if(skip.at(i))continue;
        if(!(skip.at(i-1)))way.at(i)+=way.at(i-1);
        if(((i-2)>=0)&&(!(skip.at(i-2))))way.at(i)+=way.at(i-2);
        way.at(i)%=div;
    }
    cout<<way.at(n)<<endl;
    return 0;
}


