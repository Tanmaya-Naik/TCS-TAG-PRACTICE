#include <bits/stdc++.h>
using namespace std;

int main() {
    // Array 1
    vector<int> arr1 = {12, 15, 14, 13, 8};
    // sort(arr1.begin(),arr1.end());

    // int smallest=arr1[0];
    
    int smallest=arr1[0];
    for(int i=1;i<arr1.size();i++){
        if(arr1[i] < smallest){
            smallest=arr1[i];
        }

    }
    cout<<"Smalles element is "<<smallest;
    return 0;
}