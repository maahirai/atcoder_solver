#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
//自作関数
template<class T> ll llpow(T x,T n){ll ans=1;while(n--){ans*=x;}return ans;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)
long long INF = 1LL<<60;
int n;
int main(){
    cin>>n;
    vector<int> p(n),q(n);
    rep(i,n)cin>>p.at(i);
    rep(i,n)cin>>q.at(i);
    vector<int> temp(n);
    rep(i,n)temp.at(i)=p.at(i);
    sort(temp.begin(),temp.end());
    int qi=0,pi=0;
    int cnt=0;
    do{
        int comp[n];
        int i=0;
       for(int x: temp){
          comp[i]=x;
          i++;
       }
       rep(j,n){
           if(pi!=0)break;
           if(comp[j]!=p.at(j))break;
           if(j==n-1)pi=cnt;
       }
       rep(j,n){
           if(qi!=0)break;
           if(comp[j]!=q.at(j))break;
           if(j==n-1)qi=cnt;
       }
       cnt++;
    }while(next_permutation(temp.begin(),temp.end()));
    cout<<abs(pi-qi)<<endl;
    return 0;
}


