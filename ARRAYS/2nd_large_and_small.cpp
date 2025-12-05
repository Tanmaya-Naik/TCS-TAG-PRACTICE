#include <bits/stdc++.h>
using namespace std;

int main() {
    // Array 1
    vector<int> arr1 = {12, 15, 14, 13, 8,1,44,55,33,145,189}; 
    int n=arr1.size();
    int small=INT_MAX;
    int sec_small=INT_MAX;

    int large=INT_MIN;
    int sec_large=INT_MIN;
    for(int i=0;i<n;i++){
        small=min(arr1[i],small);
        large=max(arr1[i],large);
    }

    for(int i=0;i<n;i++){
        if(arr1[i] < sec_small && arr1[i] != small){
            sec_small=arr1[i];
        }
        if(arr1[i] > sec_large && arr1[i] != large){
            sec_large=arr1[i];
        }
    }

    cout<<sec_large<<","<<sec_small;
    return 0;
}