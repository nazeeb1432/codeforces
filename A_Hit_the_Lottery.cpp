#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int bills[]={100,20,10,5,1};

    int num_bills=0;

    for(int i=0;i<5;i++){
        num_bills+=n/bills[i];
        n%=bills[i];
    }

    cout<<num_bills<<endl;

}