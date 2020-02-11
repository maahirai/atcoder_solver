#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
//自作関数
template<class T> ll llpow(T x,T n){ll ans=1;while(n--){ans*=x;}return ans;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)
    const long double PI = (acos(-1));
    const long double eps=1e-9;

long long INF = 1LL<<60;
void xlfp(double x){printf("%.10lf\n",x);}

long double f(long double a,long double b,long double x){
    if(a*a*b<=2*x){
        return atan(2*(a*a*b-x)/(a*a*a));
    }
    else{
        return PI/2-atan(2*x/(a*b*b));
    }
}
int main(){
    long double a,b,x;
    cin>>a>>b>>x;
    xlfp(f(a,b,x)/PI*180);
    return 0;
}


