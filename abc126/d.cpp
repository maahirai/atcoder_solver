#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
using vll=vector<ll>;
using vvll=vector<vll>;
using vi=vector<int>;
using vvi=vector<vector<int>>;
using vb=vector<bool>;
using pii=pair<int,int>;
using vpii=vector<pair<int,int>>;
using plli=pair<ll,int>;
using vplli=vector<pair<ll,int>>;
using pllll=pair<ll,ll>;
using vpllll=vector<pair<ll,ll>>;

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
//試験導入
#define irep(i, end_i, begin_i) for (ll i = (ll)begin_i-1; i >= (ll)end_i; i--)

long long INF = 1LL<<60;
int main( ){
    ll n;
    cin>>n;
    vpllll conne[n];
    rep(i,0,n-1){
        ll u,v,w;
        cin>>u>>v>>w;
        u--,v--;
        pllll e=make_pair(u,w);
        conne[v].push_back(e);
        e.first=v;
        conne[u].push_back(e);
    }
    vll dist(n,INF);
    dist[0]=0;
    priority_queue<pllll,vpllll,greater<pllll>> q;
    q.emplace(0,0);
    ll cnt=0;
    while(cnt<n&&!q.empty()){
        pllll e=q.top(); q.pop();
        chmin(dist[e.second],e.first);
        cnt++;
        for(auto p:conne[e.second]){
            ll ndist=p.second+e.first;
            ll nidx=p.first;
            if(dist[nidx]!=INF)continue;
            q.emplace(ndist,nidx);
        }
    }
    rep(i,0,n){
        if(dist[i]%2==0)cout<<0<<endl;
        else cout<<1<<endl;
    }
    return 0;
}


