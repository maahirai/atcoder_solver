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
    int n,m;
    cin>>n>>m;
    vi conne[n];
    rep(i,0,m){
        int u,v;
        cin>>u>>v;
        u--,v--;
        conne[u].push_back(v);
        conne[v].push_back(u);
    }
    int cnt=0;
    vb is_visit(n,false);
    rep(start,0,n){
        if(is_visit[start]==false){
            stack<pii> st;
            st.emplace(start,-1);
            is_visit[start]=true;
            bool check=true;
            while(!st.empty()){
                pii e=st.top(); st.pop();
                for(int nxt:conne[e.first]){
                    if(is_visit[nxt]==false){
                        st.emplace(nxt,e.first);
                        is_visit[nxt]=true;
                    }
                    else{
                        if(nxt==e.second)continue;
                        check=false;
                        continue;
                    }
                }
            }
            if(check)cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}


