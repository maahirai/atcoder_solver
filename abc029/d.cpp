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
//digid,dif,cnt1
ll dp[15][2][12];
int main( ){
    string n;
    cin>>n;
    int N=n.size();
    dp[0][0][0]=1;
    rep(i,0,n.size()){
        int d=n[i]-'0';
        rep(j,0,2){
            rep(k,0,10){
                rep(v,0,10){
                    //変数のスコープ間違えてないかチェック!!
                    int ni=i+1,nj=j,nk=k;
                    if(j==0){
                        if(v<d)nj=1;
                        if(v>d)break;
                    }
                    if(v==1)nk++;
                    dp[ni][nj][nk]+=dp[i][j][k];
                }
            }
        }
    }
    ll ans=0;
    rep(j,0,2){
        rep(k,1,10){
            ans+=k*dp[N][j][k];
        }
    }
    cout<<ans<<endl;
    return 0;
}


