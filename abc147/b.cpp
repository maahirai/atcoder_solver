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
    string s,rev;
    cin>>s;
    rev=s;
    reverse(rev.begin(),rev.end());
    if(rev==s){
        cout<<0<<endl;
        return 0;
    }
    int count=0;
    for(int i=0;i<s.size()/2;i++){
        if(s.at(i)!=rev.at(i))count++;
    }
    cout<<count<<endl;
    return 0;
}


