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
    vector<int> color{399,799,1199,1599,1999,2399,2799,3199,4800};
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n)cin>>a[i];
    sort(a.begin(),a.end());
    int sum=0;
    int ans=0;
    rep(i,9){
        if(i!=8){
        if(sum<n&&a[sum]<=color[i])ans++;
        while(sum<n&&a[sum]<=color[i]){
            sum++;
        }
        }
        else {
            sum=n-sum;
        }
   }
        cout<<max(ans,1)<<" "<<sum+ans<<endl;
    return 0;
}


