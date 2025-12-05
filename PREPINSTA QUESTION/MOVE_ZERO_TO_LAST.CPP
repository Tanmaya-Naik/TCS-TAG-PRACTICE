#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={4,5,0,1,9,0,5,0,7,0};
    int sizee=arr.size();

    vector<int> ans;

    for(int i=0;i<sizee;i++){
        if(arr[i] != 0){
            ans.push_back(arr[i]);
        }
    }

    
    int ansSZ=ans.size();

    int totalzero_push=sizee-ansSZ;

    while(totalzero_push != 0){
        ans.push_back(0);
        totalzero_push--;
    }

    for(int j=0;j<ans.size();j++){
        cout<<ans[j]<<",";
    }

    return 0;

}