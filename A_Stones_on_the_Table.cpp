#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    char str[n+1];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }

    int count = 0;
    for(int i=1;i<n;i++){
        if(str[i]==str[i-1]){
            count++;
        }
    }
    cout<<count<<endl;
}