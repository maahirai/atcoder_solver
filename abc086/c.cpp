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
int main(){
    int n;
    cin>>n;
    vector<int> t(n),x(n),y(n);
    rep(i,n)cin>>t.at(i)>>x.at(i)>>y.at(i);
    for(int i=0;i<n;i++){
        if(t.at(i)%2!=(x.at(i)+y.at(i))%2){
            cout<<"No"<<endl;
            return 0;
        }
        else{
            if((x.at(i)+y.at(i))>t.at(i)){
                cout<<"No"<<endl;
                return 0;
            }
            else if(i>1){
                int dist = (x.at(i)-x.at(i-1))+(y.at(i)-y.at(i-1));
                int dif_t = t.at(i)-t.at(i-1);
                if(dif_t<dist){
                    cout<<"No"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}


