#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

template<class T> ll llpow(T x,T n){ll ans=1;while(n--){ans*=x;}return ans;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)
long long INF = 1LL<<60;
int n;
int main(){
    int d;
    cin>>d>>n;
    int count=0;
    if(n==100)cout<<llpow(100,d)*(n+1)<<endl;
    else{
        cout<<llpow(100,d)*(n)<<endl;
    }
    return 0;
}


