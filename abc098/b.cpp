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
    int ans=0;
    for(int i=1;i<s.size()-1;i++){
        string l,r;
        l=s.substr(0,i);
        r=s.substr(i,s.size()-i);
        vector<bool> lkind(26,false);
        vector<bool> rkind(26,false);
        int p=0;
        while(p!=l.size()){
            lkind[l[p]-'a']=true;
            p++;
        }
        p=0;
        while(p!=r.size()){
            rkind[r[p]-'a']=true;
            p++;
        }
        int t=0;
        rep(i,26)if(lkind[i]&&rkind[i])t++;
        chmax(ans,t);
    }
    cout<<ans<<endl;
    return 0;
}


