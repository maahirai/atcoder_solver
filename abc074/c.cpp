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

long long INF = 1LL<<60;
long long dp[100010];
int h[100010];
int a,b,c,d,e,f,index=0;
int main(){
    int sum[100];
    int max_i,max_sugar=0,max_sum=0;
    double ratio=0;
    cin>>a>>b>>c>>d>>e>>f;
    for(int i=0;f>=i*100*a;i++){
        for(int j=0;f>=i*100*a+j*100*b;j++){
            for(int k=0;f>=i*100*a+j*100*b+k*c;k++){
                for(int l=0;f>=i*100*a+j*100*b+k*c+l*d;l++){
                    sum[index]=i*100*a+j*100*b+k*c+l*d;
                    if(double(e)/(100+e)>=(k*c+l*d)/(double)(i*100*a+j*100*b+k*c+l*d)){
                        if(ratio<(double)(k*c+l*d)/(i*100*a+j*100*b+k*c+l*d)){
                            max_i = index;
                            max_sugar = (k*c+l*d);
                            max_sum = sum[max_i];
                            ratio =  (double)max_sugar/(double)sum[max_i];
                        }
                    }
                    index++;
                }
            }
        }
    }
    cout<<((max_sum > 100*a) ? max_sum : 100*a)<<" "<<max_sugar<<endl;
    return 0;
}


