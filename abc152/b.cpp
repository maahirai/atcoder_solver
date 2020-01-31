#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int n;
int a,b;
int main(){
    cin>>a>>b;
    if(a==b)rep(i,a)cout<<a;
    else if(a>b)rep(i,a)cout<<b;
    else rep(i,b)cout<<a;
    cout<<endl;
    return 0;
}


