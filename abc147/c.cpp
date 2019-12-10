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
int n=0;
int x[15][15],y[15][15];
int a[20];
int count(int bit){
    if(bit==0){
        return 0;
    }
    return count(bit>>1) + (bit&1);
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        for(int j=1;j<=a[i];j++){
            cin>>x[i][j]>>y[i][j];
        }
    }
    int ans=0;
    for(int bit=1;bit<(1<<n);bit++){
    bool check = true;
        for(int i=1;i<=n;i++){
            if(!((bit&(1<<(i-1)))))continue;
            for(int j=1;j<=a[i];j++){
            if(((bit>>(x[i][j]-1))&1)^y[i][j])check = false;
            }
        }
        if(check)ans = max(ans,count(bit));
    }
    cout<<ans<<endl;
    return 0;
}


