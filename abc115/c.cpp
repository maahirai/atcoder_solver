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
    int k;
    cin>>n>>k;
    vector<int>height(n);
    rep(i,n)cin>>height.at(i);
    sort(height.begin(),height.end());
    ll sa=1e9;
    for(int i=0;i<=(n-k);i++){
        int temp=(height.at(i+k-1)-height.at(i));
        if(temp<sa)sa=temp;
    }
    cout<<sa<<endl;
    return 0;
}


