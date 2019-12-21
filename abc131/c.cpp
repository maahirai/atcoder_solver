#include<bits/stdc++.h>
using namespace std;

typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep2(i, begin_i, end_i) for (int i = (int)begin_i; i < (int)end_i; i++)

long long INF = 1LL<<60;
long long dp[100010];
int h[100010];
int n;
ll gcd(ll x,ll y){
    if(x%y==0){
        return y;
    }
    else{
        return gcd(y,x%y);
    }
}
int main(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll cd=c*d;
    ll div=gcd(c,d);
    cd/=div;
    ll candivide=-(b/cd-a/cd+(!(a%cd)))+(b/c-a/c+(!(a%c)))+(b/d-a/d+(!(a%d)));
    ll ans=(b-a+1)-candivide;
    cout<<ans<<endl;
    return 0;
}


