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
multiset<int,greater<int>> s[200010];
int main( ){
    ll N,Q;
    cin>>N>>Q;
    vi rate(N),kind(N);
    rep(i,0,N)cin>>rate[i]>>kind[i];
    multiset<int> top;
    rep(i,0,N){
        s[kind[i]].insert(rate[i]);
    }
    rep(i,0,200010){
        if(s[i].empty())continue;
        top.insert(*s[i].begin());
    }
    rep(i,0,Q){
        int idx,mvto;
        cin>>idx>>mvto;
        idx--;
        int from=kind[idx];
        //両方のtop削除
        auto e=top.find(*s[from].begin());
        top.erase(e);
        if(s[mvto].empty()==false){
            //移動先top削除
            e=top.find(*s[mvto].begin());
            top.erase(e);
        }
        //s内削除
        e=s[from].find(rate[idx]);
        s[from].erase(e);

        //移動先に挿入
        s[mvto].insert(rate[idx]);
        kind[idx]=mvto;

        //移動先のトップ追加
        top.insert(*s[mvto].begin());
        //sのトップ追加
        if(s[from].empty()==false)
            top.insert(*s[from].begin());

        cout<<*top.begin()<<endl;
    }
    return 0;
}


