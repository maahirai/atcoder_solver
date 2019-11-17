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

long long INF = 1LL<<60;
long long dp[100010];
int h[100010];
int x[10],y[10];
double dist(int i,int j){
double dx = x[i]-x[j];
double dy = y[i]-y[j];
return pow(dx*dx+dy*dy,0.5);
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=1;i<=n;i++){
        cin>>x[i]>>y[i];
    }
    rep(i,n)
        v.at(i)=i+1;
    double sum=0.0;
    do
    {
        for(int i=0;i<(n-1);i++){
            sum+=dist(v[i],v[i+1]);
        }
    } while (next_permutation(v.begin(),v.end()));
    int factorial = 1;
    for(int i=2;i<=n;i++)factorial*=i;
    cout<< fixed<<setprecision(10)<<sum/factorial<<endl;
    return 0;
}


