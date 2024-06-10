#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    set<int> s;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        s.insert(a);
    }

    if(s.size() == 1) cout<<"No"<<endl;
    else {
        cout<<*(++s.begin())<<endl;
    }
}