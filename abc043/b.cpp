#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

template<class T> ll llpow(T x,T n){ll ans=1;while(n--){ans*=x;}return ans;}
template<class T> inline T gcd(T x,T y){if(y==0)return x; else {return gcd(y,x%y);}}
template<class T> inline T lcm(T x,T y){return x/gcd(x,y)*y;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int main(){
    string s;
    cin>>s;
    string b;
    rep(i,s.size()){
       if(b.empty()&&s.at(i)=='B')continue;
       if(s.at(i)=='B')b.erase(b.size()-1);
       else {
           if(s.at(i)=='1')b+="1";
           if(s.at(i)=='0')b+="0";
       }
    }
    cout<<b<<endl;
    return 0;
}


