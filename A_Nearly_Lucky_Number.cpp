#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin>>n;

    string str=to_string(n);
    int count=0;

    for(int i=0;i<str.length();i++){
        if(str[i]=='4' || str[i]=='7') count++;
    }

    if(count==4 || count==7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}