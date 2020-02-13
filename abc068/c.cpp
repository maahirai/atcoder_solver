#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

template<class T> ll llpow(T x,T n){ll ans=1;if(x==0)ans=0;while(n){if(n&1)ans*=x;x*=x;n>>=1;}return ans;}
template<class T> inline T gcd(T x,T y){if(y==0)return x; else {return gcd(y,x%y);}}
template<class T> inline T lcm(T x,T y){return x/gcd(x,y)*y;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int main(){
    int n;
    int m;
    cin>>n>>m;
    using pbb=pair<bool,bool>;
    pbb manage[n+1];
    rep(i,m){
        int a,b;
        cin>>a>>b;
        if(a==1)manage[b].first=true;
        else if(b==n)manage[a].second=true;
    }
    for(int i=2;i<n;i++){
        if(manage[i].first&&manage[i].second){
            cout<<"POSSIBLE"<<endl;
            return 0;
        }
       }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}


