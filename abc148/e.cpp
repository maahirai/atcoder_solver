#include<bits/stdc++.h>
using namespace std;

typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep2(i, begin_i, end_i) for (int i = (int)begin_i; i < (int)end_i; i++)
 ll solve(ll n){
        ll ans=0;
        ll div=10;
        while(div<=n){
            ans+=n/div;
            div*=5;
        }
        return ans;
    }
long long INF = 1LL<<60;
int main(){
    ll n;
    cin>>n;
    if(n%2){
        cout<<0<<endl;
    }
    else{
       cout<<solve(n)<<endl;
    }
    return 0;
}


