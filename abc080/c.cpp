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
ll profitparpart[10];
int f[110][10]={(0,0)},n=0;
int64_t p[110][15]={(0,0)};
int main(){
    cin>>n;
    for(int a=0;a<n;a++){
        for(int b=0;b<10;b++){cin>>f[a][b];}
        }
    for(int a=0;a<n;a++){
        for(int b=0;b<=10;b++){
            cin>>p[a][b];
        }
    }
    int64_t res= -(1<<30);
    for(int i=1;i<(1<<10);i++){
       int64_t sum=0;
        for(int j=0;j<n;j++){
            int count=0;
            for(int k=0;k<10;k++)
                if((i>>k&1)&&(f[j][k]))count++;
            sum+=p[j][count];
        }
            if(sum>res)res=sum;
    }
    cout<<res<<endl;
    return 0;
}


