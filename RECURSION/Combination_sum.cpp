// COMBINATION SUM FIND THE NUMBER OF COMBINATION THAT THEIR SUM IS EQUAL TO TARGET



#include <bits/stdc++.h>
using namespace std;

set<vector<int>> st;

void getallcombi(vector<int> &arr,int i,vector<int> &combi ,vector<vector<int>> &ans,int target){

if(target==0){

if(st.find(combi) == st.end()){
ans.push_back(combi);
st.insert(combi);
}
return;
}

if(i == arr.size() || target < 0){
return;
}

//single time include arr[i]
combi.push_back(arr[i]);
getallcombi(arr,i+1,combi,ans,target-arr[i]);

//multiple time include arr[i]
getallcombi(arr,i,combi,ans,target-arr[i]);

//exclude arr[i]
combi.pop_back();
getallcombi(arr,i+1,combi,ans,target);

}



int main(){
int n;
cin>>n;

cin.ignore();
vector<int> arr(n);
for(int i=0;i<n;i++){
cin>>arr[i];
}

int target;
cin>>target;

vector<int> ans;
vector<vector<int>> combi;

getallcombi(arr,0,ans,combi,target);

for(const auto &row:st){
for(auto it:row){
cout<<it<<" ";
}
cout<<endl;
}

return 0;
}


