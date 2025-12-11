#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Take the length of the array from user"<<endl;
    cin>>n;

    cout<<"Take array value";
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int greatest=arr[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i] > greatest){
            count++;
            greatest=arr[i];
        }
    }

    cout<<"There are "<<count<<" no of leader in the array"<<endl;

    return 0;
}