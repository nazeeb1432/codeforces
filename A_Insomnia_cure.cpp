#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    int condn[4],d;
    for(int i=0;i<4;i++){
        cin>>condn[i];
    }
    cin>>d;

    for(int i=0;i<4;i++){
        for(int j=1;j<=d;j++){
            if((condn[i]*j)<=d){
                st.insert(condn[i]*j);
            }
            else break;
        }
        if(st.size()==d) break;
    }

    cout<<st.size()<<endl;


}