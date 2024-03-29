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

struct UnionFind { vector<int> d; UnionFind(int n=0): d(n,-1) {} int find(int x) { if (d[x] < 0) return x; return d[x] = find(d[x]); } bool unite(int x, int y) { x = find(x); y = find(y); if (x == y) return false; if (d[x] > d[y]) swap(x,y); d[x] += d[y]; d[y] = x; return true; } bool same(int x, int y) { return find(x) == find(y);} int size(int x) { return -d[find(x)];} };
int main( ){
    ll N;
    cin>>N;
    vi a(N);
    ll T;
    cin>>T;
    rep(i,0,N)cin>>a[i];
    int max[N];
    int min[N];
    int mv=0;
    irep(i,0,N){
        chmax(mv,a[i]);
        max[i]=mv;
    }
    rep(i,0,N){
        chmin(mv,a[i]);
        min[i]=mv;
    }
    int dif=0;
    rep(i,0,N-1){
        chmax(dif,max[i+1]-min[i]);
    }
    int ans=0;
    UnionFind uf(N);
    rep(i,0,N-1){
        auto b=a.begin(),e=a.end();
        b+=i;
        if((b=lower_bound(b,e,a[i]+dif))==a.end())continue;
        int idx=distance(a.begin(),b);
        uf.unite(i,idx);
    }
    set<int> p;
    rep(i,0,N){
        if(uf.size(i)>1){
            if(p.count(uf.find(i))==0){
                p.insert(uf.find(i));
            }
        }
    }
    cout<<dif<<endl;
    for(int idx:p){
        ans+=uf.size(idx)/2;
    }
    cout<<ans<<endl;
    return 0;
}


