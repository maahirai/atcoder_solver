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
    int n; string s;
    cin>>n>>s;
    //後ろからEを数える
    vector<int> be(n,0);
    if(s.at(n-1)=='E')be[n-1]=1;
    //前からWを数える
    vector<int> fw(n,0);
    if(s.at(0)=='W')fw[0]=1;


    for(int i=1;i<n;i++){if(s.at(i)=='W')fw[i]=fw[i-1]+1;else fw[i]=fw[i-1];}
    for(int i=n-2;i>=0;i--){if(s.at(i)=='E')be[i]=be[i+1]+1; else be[i]=be[i+1];}
    ll min=INF;
    rep(i,n){
        if(i==0)chmin(min,(ll)be[1]);
        else if(i==n-1)chmin(min,(ll)fw[n-2]);
        else{
            chmin(min,(ll)(fw[i-1]+be[i+1]));
        }
    }
    cout<<min<<endl;
    return 0;
}


