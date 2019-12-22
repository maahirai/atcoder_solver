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
    ll w,h;
    cin>>w>>h;
    int x,y;
    cin>>x>>y;
    double half=w*h/2.0;
    cout<<fixed<<setprecision(10)<<half;
    double dw=w,dh=h;
    if((x==dw/2)&&(y==dh/2))cout<<" "<<1<<endl;
    else{
        cout<<" "<<0<<endl;
    }
    return 0;
}


