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

typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep2(i, begin_i, end_i) for (int i = (int)begin_i; i < (int)end_i; i++)

long long INF = 1LL<<60;
long long dp[100010];
int h[100010];
int n,m;
int k[15];
int s[12][12];

int count(int x){
    int cnt=0;
    do{
        cnt+=x&1;
        x>>=1;
    }
    while(x);
    return cnt;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>k[i];
        for(int j=1;j<=k[i];j++){
            cin>>s[i][j];
        }
    }
    int p[m+3];
    int ans=0;
    rep(i,m)cin>>p[i+1];
    for(int i=0;i<1<<n;i++){
        bool ok=true;
        for(int j=1;j<=m;j++){
        int temp=0;
        for(int l=1;l<=k[j];l++){
            if((i>>(s[j][l]-1))&1)temp++;
        }
            if(temp%2!=p[j])ok=false;
        }
        if(ok)ans++;
    }
    cout<<ans<<endl;
    return 0;
}


