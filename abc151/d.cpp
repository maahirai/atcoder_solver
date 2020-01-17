#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
//自作関数
template<class T> ll llpow(T x,T n){ll ans=1;while(n--){ans*=x;}return ans;}

#define rep(i,n) for(ll i=0;i<(ll)n;i++)
#define rep2(i, begin_i, end_i) for (ll i = (ll)begin_i; i < (ll)end_i; i++)

int n;
int INF = 1<<30;
int main(){
    int h,w;
    cin>>h>>w;
    int dix[]={0,1,0,-1};
    int diy[]={1,0,-1,0};
    string s[h];
    rep(i,h)cin>>s[i];

    using p = pair<int,int>;
    int ans=0;
    rep(si,h)rep(sj,w){
    vector<vector<int>> dist(h,vector<int>(w,INF));
    queue<p> q;
        auto update=[&](int x,int y,int nv){
            if(dist[x][y]==INF){
                dist[x][y]=nv;
                q.emplace(x,y);
            }
        };
        if(s[si][sj]=='#')continue;
            update(si,sj,0);
        while(!q.empty()){
            int iv=q.front().first;
            int jv=q.front().second;
            q.pop();
        for(int k=0;k<4;k++){
           int ni=iv+dix[k];
           int nj=jv+diy[k];
           if(ni>=0&&ni<h&&nj>=0&&nj<w){
               if(s[ni][nj]=='.'){
                  update(ni,nj,dist[iv][jv]+1);
               }
           }
        }
        }
        rep(i,h)rep(j,w){
            if(dist[i][j]==INF)continue;
            chmax(ans,dist[i][j]);
        }
    }
    cout<<ans<<endl;
    return 0;
}


