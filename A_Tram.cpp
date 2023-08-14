#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,max,total;
    cin>>n;
    int arr[n][2];

    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }

     total=arr[0][1];
     max=arr[0][1];
    for(int i=1;i<n-1;i++){
        total=total+arr[i][1]-arr[i][0];
        if(total>max)max=total;
    }
    cout<<max<<endl;
}