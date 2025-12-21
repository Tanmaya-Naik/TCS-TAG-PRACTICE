#include <bits/stdc++.h>
using namespace std;

int main(){
    int  arr[] = {4, 5, 0, -2, -3, 1}; 
    int K = 5;
    int n=sizeof(arr)/sizeof(int);
    int count=0;
    int sum=0;

    for(int start = 0 ; start < n ; start++){
        sum=0;
        for(int end = start; end < n ; end++){
            sum+=arr[end];
            cout<<"Sum is: "<<sum<<endl;
             if(sum%K==0){
             count++;
             }
        

        }
        
        
    }

    cout<<"The total number of subarray divisible by k "<<count<<endl;
    return 0;
}