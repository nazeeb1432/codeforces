#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    vector<pair<int,int>> teams;
    cin>>n;

    for(int i=0;i<n;i++){
        int home,guest;
        cin>>home>>guest;
        teams.push_back({home,guest});
    }
   teams.resize(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j and (teams[i].first==teams[j].second)){
                count++;
            }
        }
    }

    cout<<count<<endl;

}