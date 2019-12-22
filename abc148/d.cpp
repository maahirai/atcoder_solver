#include<bits/stdc++.h>

using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep2(i, begin_i, end_i) for (int i = (int)begin_i; i < (int)end_i; i++)

long long INF = 1LL<<60;
long long dp[100010];
int h[100010];
int n;
int main(){
    cin>>n;
    vector<int> a(n);
    rep(i,n){cin>>a.at(i);}
        int attention=1;
    for(int i=0;i<n;i++){
        if(a.at(i)==attention){
            attention++;
        }
    }
    if(attention==1){
        cout<<-1<<endl;
    }
    else{
        cout<<n-attention+1<<endl;
    }
    return 0;
}


