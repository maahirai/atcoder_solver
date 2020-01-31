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
ll ans=0;
int digit(int x){
int ret=0;
while(x){
x/=10;
ret++;
}
return ret;
}
int main(){
    cin>>n;
    int count[10][10];
    ll ans=0;
    rep(i,10)rep(j,10)count[i][j]=0;
    for(int x=1;x<=n;x++){
        count[x/llpow(10,digit(x)-1)][x%10]++;
    }
    for(ll al=1;al<=9;al++){
        for(ll as=1;as<=9;as++){
           ans+=count[al][as]*count[as][al];
        }
    }
    cout<<ans<<endl;
    return 0;
}


