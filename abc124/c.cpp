#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

long long INF = 1LL<<60;
int n;
int main(){
    string s;
    cin>>s;
    int wrongs0=0;
    int wrongs1=0;
    for(int i=0;i<s.size();i++){
        if(i%2){
            wrongs0+=(s.at(i)=='1');
        }
        else{
            wrongs0+=(s.at(i)=='0');
        }
    }
    for(int i=0;i<s.size();i++){
        if(i%2){
            wrongs1+=(s.at(i)=='0');
        }
        else{
            wrongs1+=(s.at(i)=='1');
        }
    }
    cout<<min(wrongs0,wrongs1)<<endl;
    return 0;
}


