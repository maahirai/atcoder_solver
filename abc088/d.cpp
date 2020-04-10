#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
using vll=vector<ll>;
using vi=vector<int>;
using vvi=vector<vector<int>>;
using vb=vector<bool>;
using pii=pair<int,int>;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

//pow(llpow,modpow)
template<class T> ll llpow(ll x,T n){ll ans=1;if(x==0)ans=0;while(n){if(n&1)ans*=x;x*=x;n>>=1;}return ans;}
long long modpow(long long a, long long n, long long mod) {long long res = 1;while (n > 0) {if (n & 1) res = res * a % mod;a = a * a % mod;n >>= 1;}return res;}
//最大公約数
template<class T> inline T gcd(T x,T y){if(y==0)return x; else {return gcd(y,x%y);}}
//最小公倍数
template<class T> inline T lcm(T x,T y){return x/gcd(x,y)*y;}
//逆元
long long modinv(long long a, long long m) {long long b = m, u = 1, v = 0;while (b) {long long t = a / b;a -= t * b; swap(a, b);u -= t * v; swap(u, v);}u %= m;if (u < 0) u += m;return u;}

#define rep(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int main( ){
    int h,w; cin>>h>>w;
    string S[h];
    rep(i,0,h)cin>>S[i];
    int cntw=0;
    rep(i,0,h){
        rep(j,0,w){
            if(S[i][j]=='.')cntw++;
        }
    }
    int wayx[]={-1,0,0,1};
    int wayy[]={0,1,-1,0};
    vector<vb> is_visited(h,vb (w,false));
    queue<pii> q;
    pii s=make_pair(0,0);
    q.emplace(s);
    vector<vi> res(h,vi (w,1<<30));
    res[0][0]=1;
    int cnt=0;
    is_visited[0][0]=true;
    while(!q.empty()){
        pii t=q.front();q.pop();
        int y=t.first; int x=t.second;
        rep(way,0,4){
            int nx=x+wayx[way],ny=y+wayy[way];
            if(nx>=0&&nx<w&&ny<h&&ny>=0){
                if(is_visited[ny][nx]==false&&S[ny][nx]=='.'){
                    chmin(res[ny][nx],res[y][x]+1);
                    q.emplace(ny,nx);
                    is_visited[ny][nx]=true;
                }
            }

        }
    }
    if(res[h-1][w-1]==1<<30)cout<<-1<<endl;
    else {
        cout<<cntw-res[h-1][w-1]<<endl;
    }
    return 0;
}


