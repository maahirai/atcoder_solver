#include<bits/stdc++.h>
using namespace std;

typedef  long long ll;
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep2(i, begin_i, end_i) for (int i = (int)begin_i; i <=(int)end_i; i++)

long long INF = 1LL<<60;
long long dp[100010];
int h[110];
int cnt[110]={0};
int n;
int ans=0;
void mizuyari(int,int);
void chk(int left,int right){
    int l=-1,r=-1;
    int i=left;
    while(i<=right){
        if((cnt[i]<h[i])&&(l==-1)){
           l=r=i;
        }
        else if((cnt[i]<h[i])&&(l!=-1)){
            r=i;
        }
        else if(l!=-1){
            mizuyari(l,r);
            l=r=-1;
        }
        i++;
    }
    if(l!=-1)mizuyari(l,r);
}
void mizuyari(int left,int right){
    ans++;
    rep2(i,left,right)cnt[i]++;
    chk(left,right);
}
int main(){
    cin>>n;
    rep(i,n)cin>>h[i];
    int l=0,r=(n-1);
    chk(l,r);
    cout<<ans<<endl;
    return 0;
}



