#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    if(1<=x && x<=5)cout<<1<<endl;
    else if(x%5==0)cout<<x/5<<endl;
    else if(1<=x%5 && x%5<=4)cout<<(x/5)+1<<endl;
}

