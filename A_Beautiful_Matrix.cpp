#include<bits/stdc++.h>
using namespace std;

int main(){
    int matrix[5][5];
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>matrix[i][j];
        }
    }

   
     int r,c,ans;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
           if(matrix[i][j]==1){
            r=i;
            c=j;
           }
        }
    }

    cout<<abs(3-r)+abs(3-c)<<endl;

}