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
int main(){
    cin>>n;
    vector<int> c(n),s(n),f(n);
    rep(i,n)cin>>c.at(i)>>s.at(i)>>f.at(i);
    for(int i=0;i<n;i++){
        int t=0;
        for(int j=i;j<n-1;j++){
            if(t<s.at(j))t=s.at(j);
            else if(t%f.at(j)==0);
            else t=t+f.at(j)-t%f.at(j);
            t+=c.at(j);
        }
        printf("%d\n",t);
    }
    return 0;
}


