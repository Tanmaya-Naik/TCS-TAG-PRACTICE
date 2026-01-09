#include <bits/stdc++.h>
using namespace std;
unordered_set<string> st;
void getallpermutation(string str,int idx){
int n=str.length();
if(idx==n){
st.insert(str);
return;
}

for(int i=idx;i<n;i++){
swap(str[idx],str[i]);
getallpermutation(str,idx+1);
swap(str[idx],str[i]);
}
}


int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;

string str="";
str.append(n1,'a');
str.append(n2,'b');
str.append(n3,'c');

getallpermutation(str,0);

for(auto it:st){
    cout<<it<<endl;
}

return 0;
}


