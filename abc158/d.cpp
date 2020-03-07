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

long long INF = 1LL<<60;
int main(){
    string s;
    cin>>s;
    deque<char> d;
    rep(i,s.size())d.push_back(s[i]);
    ll q;
    cin>>q;
    bool state=false;
    rep(j,q){
        ll t;
        cin>>t;
        if(t==1){
            state^=true;
        }
        else if(t==2){
            int tmp;
            char c;
            cin>>tmp>>c;
            if(tmp==1){
                if(state)d.push_back(c);
                else d.push_front(c);
            }
            else if(tmp==2){
                if(state)d.push_front(c);
                else d.push_back(c);
            }
        }
    }
    if(state)for(auto itr=d.rbegin();itr!=d.rend();itr++){
        cout<<*itr;
    }
    else for(auto itr=d.begin();itr!=d.end();itr++){
        cout<<*itr;
    }
    cout<<endl;
    return 0;
}


