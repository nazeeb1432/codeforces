#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char,int> mp,mp2;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    bool ans=true;

    for(auto u:s1){
        mp[u]++;
    }

    for(auto v:s2){
        mp[v]++;
    }

    for(auto w:s3){
        mp2[w]++;
    }

    for(auto i:s3){
        if(mp[i]!=mp2[i]){
            ans=false;
            break;
        }
    }

    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}