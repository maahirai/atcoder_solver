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
int f[110][15];
int p[110][15];
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=10;j++)
            cin>>f[i][j];
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=10;j++){
            cin>>p[i][j];
        }
    }
    int ans = (-1)<<30;
    for(int bits=1;bits<(1<<10);bits++){
        int tmpv = 0;
        for(int i=1;i<=n;i++){
            int sametime=0;
            for(int j=1;j<=10;j++){
               if(!(bits>>(j-1)&f[i][j]))continue;
                sametime++;
            }
            tmpv += p[i][sametime];
        }
        ans = max(ans,tmpv);
    }
    cout<<ans<<endl;
    return 0;
}


