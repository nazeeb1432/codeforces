#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

    while(t--){
        cin>>n;
        int count=0;
        int tmp=n/2+1;
        if(tmp==n){
            printf("%d\n",0);
        }
        else{
            while(tmp!=n){
                count++;
                tmp++;
            }
            printf("%d\n",count);
        }
    }
}