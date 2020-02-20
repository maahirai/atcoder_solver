#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
using vll=vector<ll>;
using vi=vector<int>;

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
    vi v(n);
    unordered_map<int,int> cntodd;
    unordered_map<int,int> cnteve;;
    int le=0,lo=0;
    rep(i,n){
        cin>>v[i];
        if(i%2){
            cntodd[v[i]]++;
        }
        else
        {
            cnteve[v[i]]++;
        }
    };
    using cntkey=pair<int,int>;
    int res=0;
    priority_queue<cntkey> qe,qo;
    for(auto i:cntodd)qo.emplace(i.second,i.first);
    for(auto i:cnteve)qe.emplace(i.second,i.first);
    int ov=qo.top().first,ev=qe.top().first,ok=qo.top().second,ek=qe.top().second;
    if(ok!=ek){
        res=n-(ov+ev);
    }
    else{
        if(ov!=ev){
            if(ov>ev){
                qe.pop();
                if(!qe.empty())ev=qe.top().first;
                else ev=0;
            }
            else{
                qo.pop();
                if(!qo.empty())ov=qo.top().first;
                else ov=0;
            }
        }
        else{
            qe.pop();qo.pop();
            if(ev==n/2){
               cout<<n/2<<endl;
               return 0;
            }

            if(qe.top().first>=qo.top().first){
                ev=qe.top().first;
            }
            else {
                ov=qo.top().first;
            }
        }
        res=n-(ov+ev);
    }
    cout<<res<<endl;
    return 0;
}


