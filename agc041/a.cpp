#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
ll n,m,a,b;
int main(){
    cin>>n>>a>>b;
    if((b-a)%2==0){
        cout<<(b-a)/2<<endl;
    }
    else{
        if((a-1)>=(n-b)){
            cout<<min(n-a,(b-a-1)/2+n-b+1)<<endl;
        }
        else{
            cout<<min(b-1,a+(b-a-1)/2)<<endl;
        }
    }
    return 0;
}


