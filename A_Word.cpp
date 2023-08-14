#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int up_count=0,low_count=0;

    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z') up_count++;
        else if(s[i]>='a' && s[i]<='z') low_count++;
    }

    if(up_count>low_count){
        for(int i=0;i<s.length();i++){
            s[i]=toupper(s[i]);
        }
        cout<<s<<endl;
    }
    if(up_count<=low_count){
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }

}