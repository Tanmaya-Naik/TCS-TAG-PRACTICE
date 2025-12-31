#include <bits/stdc++.h>
using namespace std;

vector<int> findrepeating_missing(vector<int> nums){
    int repeting=-1;
    int missing=-1;

    int n=nums.size();
    for(int i=1;i<=n;i++){
        int counter=0;
        for(int j=0;j<n;j++){
            if(nums[j]==i){
                counter++;
            }
        }

        if(counter == 2){
            repeting=i;
        }else if(counter==0){
            missing=i;
        }
  
         if(repeting != -1 && missing!=-1){
         break;
    }
        
    }

    return {repeting,missing};

   
}

int main(){
    vector<int> nums = {3, 1, 2, 5, 4, 6, 7, 5};

   vector<int> result=findrepeating_missing(nums);
    cout<<"The repeting and missing numbers are:"<<result[0]<<","<<result[1]<<endl;

    return 0;

    
}