#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
//自作関数
template<class T> ll llpow(T x,T n){ll ans=1;while(n--){ans*=x;}return ans;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int n;
int main(){
    cin>>n;
    int m;
    cin>>m;
    vector<int>p(m+1);
    vector<string> s(m+1);
    vector<bool> ac(n+1,false);
    vector<int> count(n+1,0);
    ll sum=0;
    ll acc=0;
    rep(i,m){
        cin>>p[i]>>s.at(i);
        if(s[i]=="WA"&&ac[p[i]]==false)count.at(p[i])++;
        else if(s[i]=="AC"&&ac[p[i]]==false){sum+=count[p[i]];ac[p[i]]=true;acc++;}
        else if(ac[p[i]]==true)continue;

    }
    cout<<acc<<" "<<sum<<endl;
    return 0;
}


