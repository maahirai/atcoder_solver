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
    cin>>n;
    vector<int> t(n);
    vector<string> s(n);
    int sum=0;
    rep(i,n){cin>>s.at(i)>>t.at(i);sum+=t.at(i);}
    string x;
    cin>>x;
    int i=0;
    int ans=0;
    while(s.at(i)!=x){
        ans+=t.at(i);
        i++;
    }
    cout<<sum-ans-t.at(i)<<endl;
    return 0;
}


