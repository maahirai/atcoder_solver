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

unsigned GetDigit(unsigned num){
    unsigned digit=0;
    while(num!=0){
        num /= 10;
        digit++;
    }
    return digit;
}
int digitPoor(int64_t n)
{

    if (n < 10)         return 1;
    if (n < 100)        return 2;
    if (n < 1000)       return 3;
    if (n < 10000)      return 4;
    if (n < 100000)     return 5;
    if (n < 1000000)    return 6;
    if (n < 10000000)   return 7;
    if (n < 100000000)  return 8;
    if (n < 1000000000) return 9;
    return 10;
}

long long INF = 1LL<<60;
long long dp[100010];
int h[100010];

int main(){
    int64_t a=0,b=0,x=0,d=0,N=0;
    bool flag=false;
    cin>>a>>b>>x;
    do{
        if(flag==false){
        do{
           N+=1000;
           d=digitPoor(N);
        }while(a*N+b*d<=x);
        flag=true;
        N-=1000;
        }
        d=digitPoor(N);
    }while(a*N+b*d<=x&&++N);
    if(N>0)N--;
    if(N>1000000000)N=1000000000;
    cout<<N<<endl;
    return 0;
}


