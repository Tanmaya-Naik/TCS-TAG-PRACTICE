#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    string line;
    getline(cin,line);

    stringstream ss(line);
    vector<int> arr;
    int x;

    while(ss >> x){
        arr.push_back(x);
    }
    int n=arr.size();

    int k=5;
    int totalcount=0;
    int i=0;
    int sum=0;

    for(int j=0;j<n;j++){
        sum+=arr[j];

        while(sum > k){
            sum-=arr[i];
            i++;
       }
        if(sum==k){
            totalcount++;
        }
       

    }

    cout<<"There are total "<<totalcount<<" number of subarrays whose sum is exactly k"<<endl;
    return 0;

}