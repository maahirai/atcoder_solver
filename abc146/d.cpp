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
//試験導入
#define irep(i, end_i, begin_i) for (ll i = (ll)begin_i-1; i >= (ll)end_i; i--)

long long INF = 1LL<<60;
int main( ){
    int n;
    cin>>n;
    vector<pair<int,int>> conne[n];
    int c=0;
    rep(i,0,n-1){
        int a,b;
        cin>>a>>b;
        a--;b--;
        pii t=make_pair(b,i);
        conne[a].push_back(t);
        t.first=a;
        conne[b].push_back(t);
        chmax(c,(int)conne[a].size());
        chmax(c,(int)conne[b].size());
    }
    cout<<c<<endl;
    rep(i,0,n)sort(conne[i].begin(),conne[i].end());
    vi ans(n,0);
    queue<pii> q;
    q.emplace(0,0);
    while(!q.empty()){
        pii t=q.front();q.pop();
        int index=t.first;
        int pcolor=t.second;
        int wcolor=1;
        for(pii i:conne[index]){
            int ni=i.first;
            int ei=i.second;
            if(wcolor==pcolor)wcolor++;
            if(ans[ei]!=0)continue;
            else{
                ans[ei]=wcolor;
                q.emplace(ni,wcolor);
                wcolor++;
            }
        }
    }
    rep(i,0,n-1){
        cout<<ans[i]<<endl;
    }
    return 0;
}


