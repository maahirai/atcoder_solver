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
    int n;
    cin>>n;
    int d[n][n];
    rep(i,n)rep(j,n)cin>>d[i][j];

    vector<vector<int>> sumd(n+1,vector<int> (n+1,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sumd[i+1][j+1]=sumd[i+1][j]+sumd[i][j+1]-sumd[i][j]+d[i][j];
        }
    }
    int q;
    cin>>q;
    vector<int> p(q);
    rep(i,q)cin>>p.at(i);
    vector<ll> pmax(q,0);
    vector<ll> sumparea(n*n+1,0);
    for(int is=0;is<n;is++){
        for(int ib=is+1;ib<=n;ib++){
            for(int js=0;js<n;js++){
                for(int jb=js+1;jb<=n;jb++){
                    ll sum=(ll)sumd[ib][jb]-sumd[is][jb]-sumd[ib][js]+sumd[is][js];
                    ll area=(ll)(ib-is)*(jb-js);
                    chmax(sumparea[area],sum);
                }
            }
        }
    }
    rep(i,q){
        for(int j=0;j<=p[i];j++){
            chmax(pmax[i],sumparea[j]);
        }
    }
    rep(i,q)cout<<pmax[i]<<endl;
    return 0;
}


