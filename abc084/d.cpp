#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

template<class T> ll llpow(T x,T n){ll ans=1;while(n--){ans*=x;}return ans;}
template<class T> inline T gcd(T x,T y){if(y==0)return x; else {return gcd(y,x%y);}}
template<class T> inline T lcm(T x,T y){return x/gcd(x,y)*y;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

int isprime(int x){
    if(x<2)return 0;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
long long INF = 1LL<<60;
int main(){
    int q;
    cin>>q;
    vector<int> l(q),r(q);
    int maxr=0;
    rep(i,q){
        cin>>l[i]>>r[i];
        chmax(maxr,r[i]);
        }
    vector<int> sum_prime(maxr+3,0);
    for(int i=0;i<=maxr+1;i++){
    //s_{i+1}=s_{i}+islikenum(i);
    sum_prime[i+1]=sum_prime[i]+(i%2&&isprime(i)&&isprime((i+1)/2));
    }
    rep(i,q){
        cout<<sum_prime[r[i]+1]-sum_prime[l[i]]<<endl;
    }
    return 0;
}


