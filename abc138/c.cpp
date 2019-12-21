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
    vector<int>value(n);
    rep(i,n)cin>>value.at(i);
    sort(value.begin(),value.end());
    double ans=(value.at(0)+value.at(1))/2.0;
    rep2(i,2,n){
        ans=(value.at(i)+ans)/2.0;
    }
    cout<<setprecision(6);
    cout<<ans<<endl;
    return 0;
}


