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
bool sosu(ll x){
    for(ll i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return 0;
        }
    }
        return 1;
}
int main(){
    ll x;
    cin>>x;
    ll count=0;
    while(1){
        if(sosu(x+count)==1){
            cout<<x+count<<endl;
            return 0;
        }
        count++;
    }
        return 0;
}


