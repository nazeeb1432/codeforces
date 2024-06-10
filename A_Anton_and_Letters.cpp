#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    set<char> st;
    cin>>c;
    while(c!='}'){
        if(isalpha(c)) st.insert(c);
        cin>>c;
    }

    cout<<st.size()<<endl;
}