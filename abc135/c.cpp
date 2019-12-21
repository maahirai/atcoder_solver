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
int main(){
    cin>>n;
    vector<int>a(n+1);
    vector<int>b(n);
    rep(i,n+1)cin>>a.at(i);
    rep(i,n)cin>>b.at(i);
    ll ans=0;
    rep(i,n){
        if(b.at(i)>a.at(i)){
        ans+=a.at(i);
        b.at(i)-=a.at(i);
        a.at(i)=0;
        if(b.at(i)>=a.at(i+1)){
            ans+=a.at(i+1);
            a.at(i+1)=0;
            b.at(i)-=a.at(i+1);
        }
        else{
            ans+=b.at(i);
            a.at(i+1)-=b.at(i);
        }
        }
        else{
            ans+=b.at(i);
            a.at(i)-=b.at(i);
        }
    }
    cout<<ans<<endl;
    return 0;
}


