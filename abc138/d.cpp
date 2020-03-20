#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
using vll=vector<ll>;
using vi=vector<int>;

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

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

int INF = 1<<30;
int main( ){
    int n,m;
    cin>>n>>m;
    //定義時に()で宣言するとpush_backできない?
    vi conne[n];
    vi cnt(n,0);

    rep(i,n-1){
        int a,b;
        cin>>a>>b;
        a--; b--;
        conne[a].push_back(b);
        conne[b].push_back(a);
    }
    rep(i,m){
        int p,x;
        cin>>p>>x;;
        p--;
        cnt[p]+=x;
    }
    vector<bool> is_visited(n,false);
    queue<int> q;
    q.emplace(0);
    is_visited[0]=true;
    while(!q.empty()){
        int ele=q.front(); q.pop();
        for(auto itr=conne[ele].begin();itr!=conne[ele].end();itr++){
            if(is_visited[*itr]==false){
                cnt[*itr]+=cnt[ele];
                is_visited[*itr]=true;
                q.push(*itr);
            }
        }
    }
    rep(i,n)cout<<cnt[i]<<" ";
    return 0;
}


