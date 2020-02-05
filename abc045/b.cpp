#include<bits/stdc++.h>
using namespace std;
int main(){
    string s[3];
    cin>>s[0]>>s[1]>>s[2];
    int turn=0;//0:a,1:b,2:c
    int p[]={0,0,0};
    while(!(p[turn]==s[turn].size())){
        p[turn]++;
        turn=s[turn].at(p[turn]-1)-'a';
    }
    cout<<(char)('A'+turn);
}


