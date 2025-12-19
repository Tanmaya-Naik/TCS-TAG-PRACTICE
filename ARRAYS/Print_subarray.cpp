#include <bits/stdc++.h>
using namespace std;

void printSubarray(int *arr, int n){
    int sum=0;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            for (int i = start; i <=end; i++)
            {
                cout<<arr[i];
                
            }

            cout<<",";
            
        }
        cout<<endl;
    }
}

int main(){
    int arr[]={1,2,3,4,5,14,15,16};
    int n=sizeof(arr)/sizeof(int);
    printSubarray(arr,n);
    return 0;

}