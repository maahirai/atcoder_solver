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
int main(){
    int n;
    cin>>n;
    int first[10]={0,0,0,0,0,0,1,1,1,2};
    int second[10]={1,1,1,2,2,3,2,2,3,3};
    int third[10]={2,3,4,3,4,4,3,4,4,4};
    string s[100010];
    int64_t m=0,a=0,r=0,c=0,h=0;
    rep(i,n){cin>>s[i];if(s[i].at(0)=='M')m++;else if(s[i].at(0)=='A')a++;else if(s[i].at(0)=='R')r++;else if(s[i].at(0)=='C')c++;else if(s[i].at(0)=='H')h++;}
    int64_t v[5]={m,a,r,c,h};
    int64_t sum=0;
    rep(i,10)sum+=v[first[i]]*v[second[i]]*v[third[i]];
    cout<<sum<<endl;
    return 0;
}


