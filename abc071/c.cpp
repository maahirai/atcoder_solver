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
    vector<int> a(n);
    rep(i,n)cin>>a.at(i);
    sort(a.begin(),a.end(),greater<int>());
    queue<int> q;
    int count=-1;
    int v=-1;
    rep(i,n){
        if(v!=a.at(i)){
            count=1;
            v=a.at(i);
        }
        else{
            count++;
        }
        if(!(count%2)){
            count-=2;
            q.push(v);
        }
        if(q.size()==2){
            break;
        }
    }
    if(q.size()==2){
        ll x,y;
        x=q.front(); q.pop();
        y=q.front(); q.pop();
        cout<<x*y<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}


