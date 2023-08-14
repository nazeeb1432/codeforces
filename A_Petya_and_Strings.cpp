#include<bits/stdc++.h>
using namespace std;

int main(){
    char s1[101],s2[101];
    scanf("%s %s",s1,s2);

    int len=strlen(s1);


    for(int i=0;i<len;i++){
        s1[i]=toupper(s1[i]);
        s2[i]=toupper(s2[i]);
    }

    cout<<strcmp(s1,s2)<<endl;

   /* int ans=0;

    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==s2[i] || abs(s1[i]-s2[i])==32 || abs(s1[i]-s2[i])==0)
        {
            continue;
        }
        else if(abs(s1[i]-s2[i])<32){
            ans=-1;
            break;
        }
        else if(abs(s1[i]-s2[i]>32)){
            ans=1;
            break;
        }
    }
    cout<<ans<<endl;*/
    return 0;

}
