//                             //THIS IS THE BRUTE FORCE ONE


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// string line;
// getline(cin,line);

// vector<int> arr;
// string temp="";

// for(char c:line)
// {
// if(isdigit(c) || c=='-')
// {
// temp+=c;
// }
// else{
// if(!temp.empty())
// {
// arr.push_back(stoi(temp));
// temp.clear();
// }
// }
// }

// if(!temp.empty())
// {
// arr.push_back(stoi(temp));
// }

// int n=arr.size();

// int count0=0;
// int count1=0;
// int count2=0;

// for(int i=0;i<n;i++){
// if(arr[i]==0){
// count0++;
// }
// else if(arr[i]==1){
// count1++;}
// else if(arr[i]==2){
// count2++;
// }
// }

// int index=0;

// while(count0>0){
// arr[index++]=0;
// count0--;
// }
// while(count1>0){
// arr[index++]=1;
// count1--;
// }
// while(count2>0){
// arr[index++]=2;
// count2--;
// }

// for(int i=0;i<n;i++){
// cout<<arr[i]<<" ";
// }

// return 0;

// }



                    //THIS IS THE BETTER ONE WITH 0(N) TC ANS SC-O(1)

#include <bits/stdc++.h>
using namespace std;

int main(){
    string line;
    getline(cin,line);

    vector<int> arr;
    string temp="";

    for(char c:line){
        if(isdigit(c) || c=='-'){
            temp+=c;
        }
        else{
            if(!temp.empty()){
                arr.push_back(stoi(temp));
                temp.clear();
            }
        }
    }

    if(!temp.empty()){
        arr.push_back(stoi(temp));
    }

    int count0=0;
    int count1=0;
    int count2=0;

    for(int i=0;i<arr.size();i++){
        if(arr[i]==0) count0++;
        else if(arr[i]==1) count1++;
        else if(arr[i] == 2) count2++;
    }

    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int i=count0;i<count0+count1;i++){
        arr[i]=1;
    }
    for(int i=count0+count1;i<arr.size();i++){
        arr[i]=2;
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}