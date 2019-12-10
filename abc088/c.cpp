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
int x;
int c[3][3];
int a[3],b[3];
int row[3];
int column[3];
int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>c[i][j];
        }
    }
    rep(i,3){b[i]=c[0][i];}
    rep(i,3)a[i]=c[i][0]-b[0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i]+b[j]!=c[i][j]){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
     cout<<"Yes"<<endl;
     return 0;
}


