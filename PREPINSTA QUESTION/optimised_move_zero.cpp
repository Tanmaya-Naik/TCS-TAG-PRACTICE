#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={4,5,0,1,9,0,5,0,7,0};
    int sizee=arr.size();

    int i=arr[0];
    int j=arr[0];

    for(int k=0;i<sizee;i++){
        if(arr[k] != 0){
            i++;
        }
        j=i+1;

        if(arr[j] !=0){
            swap(arr[i],arr[j]);
            i++;
        }
        j++;
    }

    for(int l=0;l<arr.size();l++){
        cout<<arr[l]<<",";
    }

    return 0;
}