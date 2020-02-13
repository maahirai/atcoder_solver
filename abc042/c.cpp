#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

template<class T> ll llpow(T x,T n){ll ans=1;if(x==0)ans=0;while(n){if(n&1)ans*=x;x*=x;n>>=1;}return ans;}
template<class T> inline T gcd(T x,T y){if(y==0)return x; else {return gcd(y,x%y);}}
template<class T> inline T lcm(T x,T y){return x/gcd(x,y)*y;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;

int bfs(bool x[],int to){
    static queue<int> q;
    for(int i=1;i<10;i++){
        if(x[i])q.push(i);
    }
    while(!q.empty()){
       if(q.front()<to){
        for(int j=0;j<10;j++){
            if(x[j])q.push(q.front()*10+j);
           }
            q.pop();
        }
        else {
            return q.front();
        }
    }
}
void solve(bool x[],int to){
    int ans=bfs(x,to);
    cout<<ans<<endl;
}
int main(){
    int n,k;
    cin>>n>>k;
    bool d[10];
    rep(i,10)d[i]=true;
    rep(i,k){int tmp;cin>>tmp;d[tmp]=false;}
    solve(d,n);
    return 0;
}


