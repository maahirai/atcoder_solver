#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<numeric>
#include<limits>
#include<bitset>
#include<functional>
#include<type_traits>
#include<queue>
#include<stack>
#include<array>
#include<random>
#include<utility>
#include<cstdlib>
#include<ctime>

using namespace std;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep2(i, begin_i, end_i) for (int i = (int)begin_i; i < (int)end_i; i++)

long long INF = 1LL<<60;
long long dp[100010];
int h[100010];
int n;
int x[10],y[10];

double dist(int i,int j){
    double dx = (x[i]-x[j]);
    double dy = (y[i]-y[j]);
    return   pow(dx*dx + dy*dy,0.5);
}

void solve(){
cin>>n;
for(int i=1;i<=n;i++){cin>>x[i]>>y[i];}
double ave=0.0;
for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++)ave+= dist(i,j)*2/n;
}
cout<<fixed<<setprecision(10)<<ave<<endl;
    return ;
}
int main(){
    solve();
    return 0;
}

