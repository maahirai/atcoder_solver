#include<bits/stdc++.h>
using namespace std;

typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep2(i, begin_i, end_i) for (int i = (int)begin_i; i < (int)end_i; i++)

long long INF = 1LL<<60;
long long dp[100010];
int h[100010];
int n;
ll fact(int x){
    ll ret=1;
    while(x){
        ret*=x;
        x--;
    }
    return ret;
}
ll choose(int n,int r){
    ll ret=0;
    ret = fact(n)/(fact(n-r)*fact(r));
    return ret;
}
int main(){
    int n;
    cin>>n;
    string s[n+5];
    rep(i,n){cin>>s[i];sort(s[i].begin(),s[i].end());}
    unordered_map<string,ll> count;
    for(int i=0;i<n;i++){
            count[s[i]]++;
    }
    ll ans=0;
    for(auto iter=count.begin();iter!=count.end();iter++){
        pair<string,ll> elem=*iter;
        ans+= elem.second*(elem.second-1)/2;
    }
    cout<<ans<<endl;
    return 0;
}


