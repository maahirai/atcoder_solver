#include<bits/stdc++.h>
using namespace std;

typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep2(i, begin_i, end_i) for (int i = (int)begin_i; i < (int)end_i; i++)

long long INF = 1LL<<60;
int n;
int main(){
    string s;
    cin>>s;
    ll k;
    cin>>k;
    for(ll i=0;i<k;i++){
        if(s.at(i)!='1'){
            cout<<s.at(i)<<endl;
            return 0;
        }
    }
    cout<<"1\n";
    return 0;
}


