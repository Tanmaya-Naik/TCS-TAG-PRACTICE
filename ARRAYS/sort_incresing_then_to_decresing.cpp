#include <bits/stdc++.h>
using namespace std;

int main() {
    // Array 1
    vector<int> arr1 = {4, 2, 8, 6, 15, 5, 9, 20};
    int n=arr1.size();
    sort(arr1.begin(),arr1.end());

    int mid=n/2;
    sort(arr1.begin()+mid,arr1.end(),greater<int> ());

    for(int i=0;i<n;i++){
        cout<<arr1[i]<<",";
    }

    return 0;
}
