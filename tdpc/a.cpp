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
    cin>>n;
    vector<int> p(n);
    rep(i,n)cin>>p.at(i);
    bool score[n+1][10010]={false};
    score[0][0]=true;
    for(int i=0;i<n;i++){
        for(int point=0;point<=10000;point++){
            if(score[i][point]){
                score[i+1][point]=true;
                score[i+1][point+p.at(i)]=true;
            }
        }
    }
    int count=0;
    rep(i,10001){
        if(score[n][i])count++;
    }
    cout<<count<<endl;
    return 0;
}


