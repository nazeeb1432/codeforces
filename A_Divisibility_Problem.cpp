#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,result,ans;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b==0){
            cout<<(a%b)<<endl;
        }
        else{
            result=(a-(a%b))/b;
        ++result;
        int ans=(b*result)-a;
        cout<<ans<<endl;
        
        }
    }
}