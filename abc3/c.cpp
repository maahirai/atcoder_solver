#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
//自作関数
template<class T> ll llpow(T x,T n){ll ans=1;while(n--){ans*=x;}return ans;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int main(){
    string s,t;
    cin>>s>>t;
    char cmp[8]={'a','t','c','o','d','e','r','@'};
    rep(i,s.size()){
        if(s.at(i)=='@'||t.at(i)=='@'){
            bool cs=false,ct=false;
                rep(j,8){
                    if(s.at(i)==cmp[j]){
                       cs=true;
                    }
                    if(t.at(i)==cmp[j]){
                        ct=true;
                    }
                }
            if(!(cs&&ct)){
                cout<<"You will lose"<<endl;
                return 0;
            }
        }
        else if(s.at(i)!=t.at(i)){
            cout<<"You will lose"<<endl;
            return 0;
        }
    }
    cout<<"You can win"<<endl;
    return 0;
}


