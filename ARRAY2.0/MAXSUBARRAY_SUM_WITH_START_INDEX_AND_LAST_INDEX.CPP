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
        arr.push_back(stoi(temp));  //THIS IS FOR THE LAST ELEMENT 
    }

    int maxsum=INT_MIN;
    int start=0,end=0;
    int tempstart=0;
    int currsum=0;
    

    //khandani kadene algorithm
    for(int i=0;i<arr.size();i++){
        currsum+=arr[i];

        if(currsum > maxsum){
            maxsum=currsum;
            start=tempstart;
            end=i;
        }

        if(currsum < 0){
            currsum=0;
            tempstart=i+1;
        }

    }

    //TO PRINT THE SUBARRAY THAT HAS MAXISUM SUM -2  1  -3  4  -1  2  1  -5  4
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;


    cout << "Max Sum: " << maxsum << "\n";
    cout << "Start Index: " << start << "\n";
    cout << "End Index: " << end << "\n";

    return 0;
}
