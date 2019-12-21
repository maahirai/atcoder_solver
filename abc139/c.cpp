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
    vector<int> height(n);
    rep(i,n)cin>>height.at(i);
    int count=0;
    int maxcount=0;
    int index=0;
    while(index<(n-1)){
        if(height[index]>=height[index+1]){
            count++;
        }
        else{
            count=0;
        }
        if(count>maxcount)maxcount=count;
        index++;
    }
    cout<<maxcount<<endl;
    return 0;
}


