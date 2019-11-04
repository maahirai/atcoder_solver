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
#define ll long long

long long INF = 1LL<<60;
long long dp[100010];
int h[100010];

int main(){
    int n,count=0,temp=0;
    cin>>n;
    vector<int> a(n);
    rep(i,n)
        cin>>a.at(i);
    sort(a.begin(),a.end());
    int i=0;
    while(i<n){
        int v= a.at(i);temp =0;
        while(i<n&&v==a.at(i))i++,temp++;
        count+=temp%2;
    }
    cout<<count<<endl;
    return 0;
}


