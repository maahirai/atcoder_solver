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
int num[10];
int main(){
  int n;
  string s;
  cin>>n;
  cin>>s;
  int search=0,found=0;
  while(search<1000){
    int index[3]={search/100,(search/10)%10,search%10};
    int i=0,j=0,k=0;
    for(i;i<n;i++){
      if(s.at(i)==(index[0]+'0'))break;
    }
    for(j=i+1;j<n;j++){
      if(s.at(j)==(index[1]+'0'))break;
    }
    for(k=j+1;k<n;k++){
      if(s.at(k)==(index[2]+'0')){
        found++;
        break;
      }
    }
    search++;
  }
  cout<<found<<endl;
  return 0;
}


