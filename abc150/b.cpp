#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int n;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int pointer=0;
    int ans=0;
    for(int i=0;i<=n-3;i++){
        string temp=s.substr(i,3);
        if(temp=="ABC")ans++;
    }
    cout<<ans<<endl;
    return 0;
}


