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
    vector<int> a(n);
    rep(i,n)cin>>a.at(i);
    vector<int> b=a;
    sort(b.begin(),b.end(),greater<int>());
    int largest=b.at(0);
    int second=b.at(1);
    rep(i,n){
        if(a.at(i)==b.at(0))cout<<second<<endl;
        else cout<<largest<<endl;
    }
    return 0;
}


