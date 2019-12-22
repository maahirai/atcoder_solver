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

typedef long long ll;
long long INF = 1LL<<60;
long long dp[100010];
int h[100010];
string s;
ll ans=0;
void toku(ll,ll);
void solve(){
toku(0,0);
}
void toku(ll index,ll vton){
    if(index==s.size()){ans+= vton;return;}
    for(int i=1;i+index<=s.size();i++){
        string temp=s.substr(index,i);
        ll v=0;
        for(ll k=0;k<temp.size();k++){
            v*=10;
            v+=temp[k]-'0';
        }
        toku(index+i,vton+v);
    }
}
int main(){
    cin>>s;
    solve();
    cout<<ans<<endl;
    return 0;
}


