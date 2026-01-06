#include<iostream>
#include <limits.h>
using namespace std;

int main(){
    int arr[]={};
    int n=sizeof(arr)/sizeof(int);

    if(n==0){
        cout<<"Aray is empty!!"<<endl;
        return 0;
    }
    int minimum=INT_MAX;
    int maximum=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<minimum){
            minimum=arr[i];
        }
        if(arr[i]>maximum){
            maximum=arr[i];
        }
    }

    cout<<"The minimum element of the array is "<<minimum<<endl;
    cout<<"The maximum element of the array is "<<maximum<<endl;

    return 0;

}