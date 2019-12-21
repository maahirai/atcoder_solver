#include<bits/stdc++.h>
using namespace std;

typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep2(i, begin_i, end_i) for (int i = (int)begin_i; i < (int)end_i; i++)

long long INF = 1LL<<60;
long long dp[100010];
int h[100010];
int n;
int main(){
    ll l,r;
    cin>>l>>r;
    ll smallest=2019;
    for(ll i=l;i<r;i++){
        for(ll j=i+1;j<=r;j++){
        if((!(i%2019))||(!(j%2019))){cout<<0<<endl; return 0;}
        else{
            ll temp=(i*j)%2019;
            if(smallest>temp){
                smallest=temp;
            }
        }
        }
    }
    cout<<smallest<<endl;
    return 0;
}


