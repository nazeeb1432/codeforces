#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> mp;
    int n,count=0;
    vector<string> v;
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        v.push_back(str);
    }

    for(auto u:v){
        count+=mp[u];
    }
    cout<<count<<endl;


}