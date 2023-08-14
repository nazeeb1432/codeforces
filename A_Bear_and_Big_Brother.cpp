#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int count=0;
    if(a==b){
        count++;
    }
    else{
        while(!(a>b)){
        a=3*a;
        b=2*b;
        count++;
    }
    }
    cout<<count<<endl;
}