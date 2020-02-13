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
//yes(0:Yes or 1:YES)  no(0:No or 1:NO)
void yes(int which_yes){if(which_yes==0)cout<<"Yes"<<endl;else if(which_yes==1)cout<<"YES"<<endl;}
void no(int which_no){if(which_no==0)cout<<"No"<<endl;else if(which_no==1)cout<<"NO"<<endl;}
long long INF = 1LL<<60;
int main(){
    int n;
    cin>>n;
    int a[n];
    rep(i,n)cin>>a[i];
    int odd=0;
    int fdivable=0;
    rep(i,n){
        if(a[i]%2)odd++;
        else {
            if(!(a[i]%4))fdivable++;
        }
    }
    if(odd>fdivable){
        if((odd-fdivable<=1&&odd+fdivable==n)&&fdivable!=0)yes(0);
        else no(0);
    }
    else{
        yes(0);
    }
    return 0;
}


