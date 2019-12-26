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
int main(){
    ll n,sekisai[5];
    cin>>n;
    rep(i,5)cin>>sekisai[i];
    ll hito[6]={n,0,0,0,0,0};
    ll time=0;
    ll saiakunoeki=0;
    ll saiaku=1e15;
    rep(i,5){
    if(saiaku>sekisai[i]){
        saiakunoeki=i;
        saiaku=sekisai[i];
        }
    }
    cout<<(n%min({sekisai[0],sekisai[1],sekisai[2],sekisai[3],sekisai[4]})!=0)+n/min({sekisai[0],sekisai[1],sekisai[2],sekisai[3],sekisai[4]})+4<<endl;
    return 0;
}


