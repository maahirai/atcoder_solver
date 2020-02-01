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
int main(){
    int n,q;
    string s;
    string ac="AC";
    cin>>n>>q>>s;
    vector<bool> b(s.size(),false);
    rep(i,s.size()-1){
        string tmp=s.substr(i,2);
        if(tmp==ac)b[i]=true;
    }
    vector<int> to(s.size(),0);
    int sum=0;
    rep(i,s.size()){
        if(b[i])sum++;
        to[i]=sum;
    }
    vector<int> l(q),r(q);
    rep(i,q){
        int lv,rv;
        cin>>lv>>rv;
        l[i]=lv-1;
        r[i]=rv-1;
    }
    rep(i,q){
        cout<<to[r[i]-1]-to[l[i]-1]<<endl;
    }
    return 0;
}


