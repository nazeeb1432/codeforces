#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    sort(str.begin(), str.end());
    int count=1;

    int i=1;
    while(str[i]!='\0'){
        if(str[i]!=str[i-1]){
            count++;
            i++;
        }
        else i++;
    }
    if(count%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

}