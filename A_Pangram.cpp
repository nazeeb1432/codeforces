#include<bits/stdc++.h>
using namespace std;

int main(){
    int sz;
    string s1;
    set<char> alph;
    cin>>sz>>s1;
    

    for (char &c : s1) {
        c = tolower(c);
    } 

    if (sz<26){
        printf("NO\n");
    } 
    else{
        for(auto c:s1){
            alph.insert(c);
        }
        if(alph.size()==26) cout<<"YES\n";
        else cout<<"NO\n";
        return 0;
    }

    
}