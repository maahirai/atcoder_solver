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
    vector<int> d(n);
    rep(i,n)cin>>d.at(i);
    if(n%2){
        cout<<"0"<<endl;
    }
    sort(d.begin(),d.end());

    int right_smallest=n/2,left_upper=right_smallest-1;
    cout<<d.at(right_smallest)-d.at(left_upper)<<endl;
    return 0;
}


