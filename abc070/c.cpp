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

ll gcd(ll x,ll y){
    if(y==0)return x;
    else {
        return gcd(y,x%y);
    }
}
ll lcm(ll x,ll y){
    return x/gcd(x,y)*y;
}
int main(){
    int n;
    cin>>n;
    vector<ll> t(n);
    rep(i,n)cin>>t[i];
    sort(t.begin(),t.end(),greater<ll>());
    ll ans=1;
    rep(i,n){
        ans=lcm(t[i],ans);
    }
    cout<<ans<<endl;
    return 0;
}


