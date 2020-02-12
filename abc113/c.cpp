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
    using pii=pair<int,int>;
    int n,m;
    cin>>n>>m;
    vector<int> manage[n];
    vector<pii> pf(m);
    rep(i,m){
        int y,p;
        cin>>p>>y;
        p--;y--;
        manage[p].push_back(y);
        pf[i]=make_pair(p,y);
    }
    for(int i=0;i<n;i++){
        sort(manage[i].begin(),manage[i].end());
    }
    for(int i=0;i<m;i++){
        printf("%06d%06d\n",pf[i].first+1,lower_bound(manage[pf[i].first].begin(),manage[pf[i].first].end(),pf[i].second)-manage[pf[i].first].begin()+1);
    }
    return 0;
}


