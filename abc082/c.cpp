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
vector<int> a(n);
int main(){
    cin>>n;
    a.resize(n);
    rep(i,n)cin>>a.at(i);
    sort(a.begin(),a.end());
    int now=0;
    int pointer=0,kind=0;
    vector<vector<int>>count;
    while(pointer<n){
        if(now!=a.at(pointer)){
            now=a.at(pointer);
            count.resize(kind+1);
            count[kind].resize(2);
            count.at(kind).at(0)=now;
        }
        while((pointer<n)&&(now==a.at(pointer))){
            count.at(kind).at(1)++;
            pointer++;
        }
        kind++;
    }
int64_t remove=0;
rep(i,kind){
    if(count.at(i).at(0)>count.at(i).at(1)){
       remove+=count.at(i).at(1);
    }
    else if(count.at(i).at(0)<count.at(i).at(1)){
       remove+= count.at(i).at(1)-count.at(i).at(0);
    }
    else{
        continue;
        }
    }
    cout<<remove<<endl;
    return 0;
}
