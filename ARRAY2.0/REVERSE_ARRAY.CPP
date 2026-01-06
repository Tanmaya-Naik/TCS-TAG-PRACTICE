#include <iostream>
using namespace std;

int main(){
    int arr[]={12,14,15,19,20,24};
    int n=sizeof(arr)/sizeof(int);
    int i=0;
    int j=n-1;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }

    cout<<"After reversal "<<endl;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int k=0;k<n;k++){
        cout<<arr[k]<<",";
    }
    return 0;
}