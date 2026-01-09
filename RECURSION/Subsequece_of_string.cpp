
#include <bits/stdc++.h>
using namespace std;

void getsubsets(string &str, vector<string> &ans, int i, string  &output){
if(i==str.length()){
ans.push_back(output);
return;
}


output.push_back(str[i]);
getsubsets(str,ans,i+1,output);

output.pop_back();
getsubsets(str,ans,i+1,output);

}



int main(){

string str;
getline(cin,str);

vector<string> ans;
string output="";

getsubsets(str,ans,0,output);

for(int i=0;i<ans.size();i++){
cout<<ans[i]<<endl;
}

return 0;
}

