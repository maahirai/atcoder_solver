#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<numeric>
#include<limits>
#include<bitset>
#include<functional>
#include<type_traits>
#include<queue>
#include<stack>
#include<array>
#include<random>
#include<utility>
#include<cstdlib>
#include<ctime>

using namespace std;

template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}

#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep2(i, begin_i, end_i) for (int i = (int)begin_i; i < (int)end_i; i++)

long long INF = 1LL<<60;
long long dp[100010];
int h[100010];
string sd,t;
int main(){
    cin>>sd>>t;
    bool flag = false;
    int check=0;
    if(sd.length()<t.length()){
    cout<<"UNRESTORABLE"<<endl;
    return 0;
    }
    while(check<=sd.length()-t.length()){
        string partsd = sd.substr(check,t.length());
        if(partsd==t){
                replace(sd.begin(),sd.end(),'?','a');
                flag = true;
                cout<<sd<<endl;
                return 0;
        }
        check++;
    }
    int index=sd.length()-t.length();
    while(index>=0){
        string partsd = sd.substr(index,t.length());
        int i =0;
        while(partsd.at(i)==t.at(i)||partsd.at(i)=='?'){
                i++;
                if(i==t.length()){
                    sd.replace(index,t.length(),t);
                    replace(sd.begin(),sd.end(),'?','a');
                    flag = true;
                    cout<<sd<<endl;
                    return 0;
                }
        }
        index--;
    }
    if(flag==false)
    cout<<"UNRESTORABLE"<<endl;
    return 0;
}


