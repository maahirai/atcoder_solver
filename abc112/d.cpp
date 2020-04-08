#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
using vll=vector<ll>;
using vvi=vector<vector<int>>;
using vb=vector<bool>;

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

using vi=vector<int>;
using pii=pair<int,int>;
using vpii=vector<pair<int,int>>;
template<class T>bool is_prime(T IN){
    if(IN<=1)return false;
    for(long long i=2;i*i<=IN;i++){
        if(IN%i==0){
            return false;
        }
    }
    return true;
}
vpllll primefact(ll x){
    vpllll ret;
    for(ll i=1;i*i<=x;i++){;
        //i=√xのときの処理改善の余地あり.
        if(x%i==0){
            vll alt={i,x/i};

            if(alt[0]==alt[1])alt[1]=1;

            rep(j,0,alt.size()){
                if(is_prime(alt[j])){
                   pllll t=make_pair(alt[j],0);
                   while(x%alt[j]==0){
                       x/=alt[j];
                       t.second++;
                   }
                   ret.push_back(t);
                }
            }
       }
    }
    return ret;
}
vll yakusuu(ll x){
    vll ret;
    for(ll i=1;i*i<=x;i++){
        if(x%i==0){
            ll a=i,b=x/i;
            ret.push_back(a);
            if(a!=b)ret.push_back(b);
        }
    }
    return ret;
}
long long INF = 1LL<<60;
int main( ){
    ll n,m; cin>>n>>m;
    vll pf=yakusuu(m);
    sort(pf.begin(),pf.end());
    for(ll i=pf.size()-1;i>=0;i--){
        if(pf[i]*n<=m){
            cout<<pf[i]<<endl;
            return 0;
        }
    }
    return 0;
}


