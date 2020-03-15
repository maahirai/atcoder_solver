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

int n;
int l[8];
int A,B,C;
int dfs(int cur,int a,int b,int c){
    if(cur==n)return (min(min(a,b),c)>0)?abs(a-A)+abs(b-B)+abs(c-C)-30:INF;

    int cos1=dfs(cur+1,a,b,c);
    int cos2=dfs(cur+1,a+l[cur],b,c)+10;
    int cos3=dfs(cur+1,a,b+l[cur],c)+10;
    int cos4=dfs(cur+1,a,b,c+l[cur])+10;

    return min(min(cos1,cos2),min(cos3,cos4));
}

int main( ){
    cin>>n;
    cin>>A>>B>>C;
    rep(i,n)cin>>l[i];
    int ans=dfs(0,0,0,0);
    cout<<ans<<endl;
    return 0;
}


