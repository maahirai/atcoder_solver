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
    int h,k;
    cin>>h>>k;
    string s[h];
    int ans[h][k];
    for(int i=0;i<h;i++){
        cin>>s[i];
    }

    for(int i=0;i<h;i++)for(int j=0;j<k;j++)ans[i][j]=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<k;j++){
            if(s[i].at(j)=='#'){
                ans[i][j]=-100;
                for(int a=-1;a<=1;a++){
                    for(int b=-1;b<=1;b++){
                        if((i+a>=0)&&(i+a<=h-1)&&(j+b>=0)&&(j+b<=k-1)&&ans[i+a][j+b]>=0){
                            ans[i+a][j+b]++;
                        }
                    }
                }
            }
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<k;j++){
            if(ans[i][j]>=0)
            cout<<ans[i][j];
            else
            cout<<"#";
        }
        cout<<endl;
    }

    return 0;
}


