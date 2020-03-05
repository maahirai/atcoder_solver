#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
using vll=vector<ll>;
using vi=vector<int>;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

//pow(llpow,modpow)
template<class T> ll llpow(T x,T n){ll ans=1;if(x==0)ans=0;while(n){if(n&1)ans*=x;x*=x;n>>=1;}return ans;}
long long modpow(long long a, long long n, long long mod) {long long res = 1;while (n > 0) {if (n & 1) res = res * a % mod;a = a * a % mod;n >>= 1;}return res;}
//最大公約数
template<class T> inline T gcd(T x,T y){if(y==0)return x; else {return gcd(y,x%y);}}
//最小公倍数
template<class T> inline T lcm(T x,T y){return x/gcd(x,y)*y;}
//逆元
long long modinv(long long a, long long m) {long long b = m, u = 1, v = 0;while (b) {long long t = a / b;a -= t * b; swap(a, b);u -= t * v; swap(u, v);}u %= m;if (u < 0) u += m;return u;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)
struct UnionFind{
    vi par;

    UnionFind(int n): par(n,-1){}

    int root(int x){
        if(par[x]<0)return x;
        else {
            return x=root(par[x]);
        }
    }

    bool issame(int x,int y){
        return root(x)==root(y);
    }

    bool merge(int x,int y){
        x=root(x); y=root(y);
        if(x==y)return false;
        if(par[x]>par[y])swap(x,y);
        par[x]+=par[y];
        par[y]=x;
        return true;
    }

    int size(int x){
        return -par[root(x)];
    }
};
long long INF = 1LL<<60;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    UnionFind uf(n);
    vector<set<int>> connect(n);

    rep(i,m){
        int a,b;
        cin>>a>>b;
        a--; b--;
        connect[a].insert(b);
        connect[b].insert(a);
        uf.merge(a,b);
    }
    rep(i,k){
        int c,d;
        cin>>c>>d;
        c--; d--;
        if(!uf.issame(c,d))continue;
        connect[c].insert(d);
        connect[d].insert(c);
    }

    rep(i,n){
        int res=uf.size(i)-1;
        res-=connect[i].size();
        cout<<res<<" ";
    }
    cout<<endl;
    return 0;
}


