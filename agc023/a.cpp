#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

template<class T> ll llpow(T x,T n){ll ans=1;while(n--){ans*=x;}return ans;}
template<class T> inline T gcd(T x,T y){if(y==0)return x; else {return gcd(y,x%y);}}
template<class T> inline T lcm(T x,T y){return x/gcd(x,y)*y;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    rep(i,n)cin>>a[i];
    vector<ll> sum(n+1,0);
    for(int i=0;i<=n-1;i++){
        sum[i+1]=a[i]+sum[i];
    }
    map<ll,ll>  num;
    for(int i=0;i<=n;i++){
        num[sum[i]]++;
    }

    ll ans=0;
    for(auto it :num){
        ll v=it.second;
        ans+=v*(v-1)/2;
    }
    cout<<ans<<endl;
    return 0;
}


