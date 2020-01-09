#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
//自作関数
template<class T> ll llpow(T x,T n){ll ans=1;while(n--){ans*=x;}return ans;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)
int te(char x){
    if(x=='r'){
        return 0;
    }
    else if(x=='s'){
        return 1;
    }
    else{
        return 2;
    }
}
long long INF = 1LL<<60;
int main(){
    ll n,k;
    int r,s,p;
    string t;
    cin>>n>>k>>r>>s>>p;
    cin>>t;
    int point[3][3]={0,0,p,r,0,0,0,s,0};
    bool win[n]={false};
    ll ans =0;
    rep(i,n){
        if(i<k){
            ans+=max({point[te(t.at(i))][0],point[te(t.at(i))][1],point[te(t.at(i))][2]});
            win[i]=true;
        }
        else{
            if((t.at(i-k)==t.at(i))&&(win[i-k]==true)){
                ans+=0;
                win[i]=false;
            }
            else{
            ans+=max({point[te(t.at(i))][0],point[te(t.at(i))][1],point[te(t.at(i))][2]});
            win[i]=true;
            }
        }
    }
    cout<<ans<<endl;
}
