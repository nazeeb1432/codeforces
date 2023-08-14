#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string str;
    cin>>str;
    
    int A_count=0,D_count=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='A')A_count++;
        if(str[i]=='D')D_count++;
        i++;
    }
    if(A_count>D_count){
        cout<<"Anton"<<endl;
    }
    else if(A_count<D_count){
        cout<<"Danik"<<endl;
    }
    else cout<<"Friendship"<<endl;
}