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


int alt[3]={3,5,7};
int ans=0;
//dd:決まった桁
void solve(ll dd,bool t,bool f,bool s,int to){
    if(t&&f&&s){
        ans++;
        rep(i,3){
        ll tmp=dd*10+alt[i];
        if(tmp<=to){
            solve(dd*10+alt[i],t,f,s,to);
        }
        }
    }
   else{
        rep(i,3){
        ll tmp=dd*10+alt[i];
        if(tmp<=to){
            if(i==0)solve(tmp,true,f,s,to);
            else if(i==1)solve(tmp,t,true,s,to);
            else { solve(tmp,t,f,true,to);}
        }
        }
    }
}
int main(){
    int n;
    cin>>n;
    bool t,f,s;
    t=f=s=false;
    solve(0LL,t,f,s,n);
    cout<<ans<<endl;
    return 0;
}


