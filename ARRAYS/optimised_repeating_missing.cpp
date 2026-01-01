#include <bits/stdc++.h>
using namespace std;

vector<int> findrepeating_missing(vector<int> nums){
    int n=nums.size();
    int hash[n+1]={0};

    for(int i=0;i<n;i++){
        hash[nums[i]]++;
    }

    int repeting=0;
    int missing=0;

    for(int i=0;i<n;i++){
        if(hash[i]==2){
            repeting=i;
        }
        else if(hash[i]==0){
            missing=i;
        }

        if(repeting!=0 && missing!=0){
            break;
        }
    }

    return {repeting,missing};
}

int main(){
    vector<int> nums = {3, 1, 2, 5, 4, 6, 8, 4};

   vector<int> result=findrepeating_missing(nums);
    cout<<"The repeting and missing numbers are:"<<result[0]<<","<<result[1]<<endl;

    return 0;

    
}