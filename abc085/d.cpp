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

long long INF = 1LL<<60;
int main( ){
    int n;
    cin>>n;
    ll h; cin>>h;
    vector<pii> a(n);
    vector<pii> b(n);
    rep(i,0,n){
        cin>>a[i].first>>b[i].first;
        a[i].second=i;b[i].second=i;
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    ll cnt=0;
    int amx=a[0].first;
    int amxi=a[0].second;
    int bmx=b[0].first;
    int bmxi=b[0].second;
    ll res=0;
    rep(i,0,n){
        if(amx<=b[i].first){
            res+=b[i].first;
            cnt++;
        }
        else{
            break;
        }
        if(res>=h){
            cout<<cnt<<endl;
            return 0;
        }
    }
    cnt+=(h-res+(amx-1))/amx;
    cout<<cnt<<endl;
    return 0;
}


