#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
//自作関数
template<class T> ll llpow(T x,T n){ll ans=1;while(n--){ans*=x;}return ans;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

ll mod=1e9+7;
long long INF = 1LL<<60;
ll n,m;
ll fact(ll x){
    ll ans=1;
    ll temp=x;
    while(temp){
        ans*=temp;
        ans%=mod;
        temp--;
    }
    return ans;
}
int main(){
    cin>>n>>m;
    if(abs(m-n)>1){
        cout<<0<<endl;
    }else if(abs(m-n)==1){
        cout<<fact(m)*fact(n)%mod<<endl;
    }
    else if(m==n){
        cout<<(fact(m)*fact(n)%mod)*2%mod<<endl;
    }
    return 0;
}


