#include <bits/stdc++.h>
using namespace std;

void getallsubset(vector<int> &arr,vector<int> &ans,int i){
    if(i==arr.size()){
        for(int val:ans){
            cout<<val;
        }
        cout<<endl;
        return;
    }

    //include 
    ans.push_back(arr[i]);
    getallsubset(arr,ans,i+1);

    //exclude
    ans.pop_back();
    getallsubset(arr,ans,i+1);

}

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

    vector<int> ans;
    // vector<vector<int>> allsubsets;

    getallsubset(arr,ans,0);

    return 0;

    



}