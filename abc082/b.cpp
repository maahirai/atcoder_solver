#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int main(){
    string s,t;
    cin>>s>>t;
    vector<int> si(s.size()),ti(t.size());
    rep(i,s.size())si[i]=s.at(i)-'a';
    rep(i,t.size())ti[i]=t.at(i)-'a';
    sort(si.begin(),si.end());
    sort(ti.begin(),ti.end(),greater<int>());
    rep(i,min(s.size(),t.size())){
        if(si.at(i)==ti.at(i))continue;
        else if(si.at(i)>ti.at(i)){
            cout<<"No"<<endl;
            return 0;
        }
        else {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    if(s.size()>=t.size())cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}


