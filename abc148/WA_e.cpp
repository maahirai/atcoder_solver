#include<bits/stdc++.h>
using namespace std;

typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep2(i, begin_i, end_i) for (int i = (int)begin_i; i < (int)end_i; i++)

long long INF = 1LL<<60;
ll ans=0;
ll firstcandiv10(ll n){
    ll temp=n;
    while(temp%10!=0){
        temp-=2;
    }
    return temp;
}
ll keta(ll n){
    ll count=0;
    while(n/10){
        n/=10;
        count++;
    }
    return count;
}
ll logkt[20]={0};
ll powll(ll x,ll n){
    ll ret=1;
    for(ll i=0;i<n;i++){
        ret*=x;
    }
    return ret;
}
void solve(ll n){
ll attention = firstcandiv10(n);
ll kt=keta(attention);
for(ll i=kt;i>0;i--){
    ll numof10=i;
    ll temp=n/powll(10,i);
    logkt[i]=temp;
    ans+=(temp-logkt[i+1])*numof10;
    cout<<(temp-logkt[i+1])*numof10<<endl;
    }
}
int main(){
    ll n;
    cin>>n;
    if((n<2)||(n%2==1)){
        cout<<0<<endl;
    }
    else{
        solve(n);
        cout<<ans<<endl;
    }
    return 0;
}


