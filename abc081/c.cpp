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
int count[200000]={0};
vector<int>a;
int k,n,kind=0;
int main(){
    cin>>n>>k;
    a.resize(n);
    vector<int>count(n);
    rep(i,n){cin>>a.at(i);if(count.at(a.at(i)-1)==0)kind++;count[a.at(i)-1]++;}
    sort(count.begin(),count.end());
    int fix = kind - k;
    if(fix<=0){cout<<0<<endl;return 0;}
    else{
        k=0,n=0;
        while(fix--){
            while(count.at(n)==0)n++;
            k+=count.at(n++);
        }
    }
   cout<<k<<endl;
    return 0;
}


