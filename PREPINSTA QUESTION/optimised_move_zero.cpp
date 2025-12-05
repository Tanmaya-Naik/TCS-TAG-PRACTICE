#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={4,5,0,1,9,0,5,0,7,0};
    int n=arr.size();

    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0 ){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int j=0;j<n;j++){
        cout<<arr[j]<<",";
    }
    return 0;
}