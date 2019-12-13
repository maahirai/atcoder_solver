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
int n,m;
bool connect[55][55];
int a[55],b[55];
vector<bool>visited(55);

void dfs(int x){
    visited.at(x)=true;
    for(int i=1;i<=n;i++){
        if(connect[i][x]==false)continue;
        if(visited.at(i))continue;
            dfs(i);
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>a[i]>>b[i];
        connect[a[i]][b[i]]=connect[b[i]][a[i]]=true;
    }
    int count=0;
    for(int i=1;i<=m;i++){
            connect[a[i]][b[i]]=connect[b[i]][a[i]]=false;
            rep(k,n)visited.at(k+1)=false;
            dfs(1);
            bool bridge = false;
            rep(l,n)if(visited.at(l+1)==false)bridge=true;
            if(bridge){count++;}
            connect[a[i]][b[i]]=connect[b[i]][a[i]]=true;
        }
    cout<<count<<endl;
    return 0;
}

