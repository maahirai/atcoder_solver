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
int x,n;
int main(){
    cin>>n;
    vector<vector<int>>a(2);
    rep(i,2)a[i].resize(n);
    for(int j=0;j<2;j++){
        for(int i=0;i<n;i++){
            cin>>a.at(j).at(i);
        }
    }
    int count=0;
    int max=0;
    for(int way=0;way<n;way++){
        int sum=0;
        bool flag = false;
        for(int i=0;i<n;i++){
        if(flag==false){
            sum+=a.at(0).at(i);
        }
        if(way==i){
            flag = true;
        }
        if(flag){
            sum+=a.at(1).at(i);
        }
        }
        chmax(max,sum);
   }
   cout<<max<<endl;
    return 0;
}


