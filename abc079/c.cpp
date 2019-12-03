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
    string s;
    cin>>s;
    int a=s.at(0)-'0',b=s.at(1)-'0',c=s.at(2)-'0',d=s.at(3)-'0';
    char sign[3];
    for(int i=0;i<2;i++){
        if(i==0)sign[0]='+';
        else sign[0]='-';
        for(int j=0;j<2;j++){
            if(j==0)sign[1]='+';
            else sign[1]='-';
            for(int k=0;k<2;k++){
                if(k==0)sign[2]='+';
                else sign[2]='-';
                    int result=0;
                    sign[0]=='+'?result=a+b:result=a-b;
                    sign[1]=='+'?result+=c:result-=c;
                    sign[2]=='+'?result+=d:result-=d;
                if(result==7){
                    cout<<a<<sign[0]<<b<<sign[1]<<c<<sign[2]<<d<<"="<<result<<endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}


