#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
ll n,k;
int main(){
    cin>>n>>k;
    double p=0;
    for(ll i=1;i<=n;i++){
        ll temp=i;
        double tmp_p=1.0/n;
        while(temp<k){
            tmp_p*=0.5;
            temp*=2;
        }
        p+=tmp_p;
    }
    cout<<fixed<<setprecision(10)<<p<<endl;
    return 0;
}


