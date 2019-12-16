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

int main(){
    int n;
    cin>>n;
    using ppsii = pair<pair<string, int>,int>;
    vector<ppsii> vppsii;
    rep(i,n){string s;int a; cin>>s>>a; vppsii.push_back(make_pair(make_pair(s,-a),i+1));}
    sort(vppsii.begin(),vppsii.end());
    rep(i,n){
        cout<<vppsii.at(i).second<<endl;
    }
    return 0;
}


