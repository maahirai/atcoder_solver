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
template<class T>bool is_prime(T IN){
    if(IN<=1)return false;
    for(long long i=2;i*i<=IN;i++){
        if(IN%i==0){
            return false;
        }
    }
    return true;
}
bool check(ll t,ll i){
    if(i==1)return false;
    while(t%i==0)t/=i;
    return (t%i==1);
}
unordered_map<ll,ll> mp;
long long INF = 1LL<<60;
int main( ){
    ll x; cin>>x;
    ll res=0;
    for(ll i=1;i*i<=(x-1);i++){
        if((x-1)%i==0){
            ll a=(x-1)/i; ll b=i;
            if(a!=1&&!mp.count(a)){
                res++; mp[a]++;
            }
            if(a!=b&&b!=1&&!mp.count(b)){
                res++;mp[b]++;
            }
        }
    }
    for(ll i=1;i*i<=x;i++){
        //iともう一方のj以外の素因数を持たないこと.つまり，x==pow(i,n)*j
        if(!(x%i)){
        ll a=i,b=x/i;
        if(check(x,a)&&!mp.count(a)){res++;mp[a]++;}
        if(a!=b&&check(x,b)&&!mp.count(b)){res++;mp[b]++;}
        }
    }
    cout<<res<<endl;
    return 0;
}


