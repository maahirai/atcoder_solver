#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

template<class T> ll llpow(T x,T n){ll ans=1;if(x==0)ans=0;while(n){if(n&1)ans*=x;x*=x;n>>=1;}return ans;}
template<class T> inline T gcd(T x,T y){if(y==0)return x; else {return gcd(y,x%y);}}
template<class T> inline T lcm(T x,T y){return x/gcd(x,y)*y;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    //どれか一つ要素を決めて，その要素を含まない両端の区間のそれぞれの最大公約数を求める．
    //その二つの値の最大公約数が，最大公約数の最大値になる．(0,n-1番目の要素は例外処理が必要)
    int forgcd[n];forgcd[0]=a[0];
    for(int i=1;i<=n-1;i++)forgcd[i]=gcd(a[i],forgcd[i-1]);
    int backgcd[n];backgcd[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)backgcd[i]=gcd(a[i],backgcd[i+1]);
    int ans=0;
    rep(i,n){
        if(i!=0&&i!=n-1)chmax(ans,gcd(forgcd[i-1],backgcd[i+1]));
        else if(i==0)chmax(ans,backgcd[1]);
        else if(i==n-1)chmax(ans,forgcd[n-2]);
    }
    cout<<ans<<endl;
    return 0;
}


