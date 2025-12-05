// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // Array 1
//     vector<int> arr1 = {12, 15, 14, 13, 8,543,323,121,44,76,69};
//     int n=arr1.size();
//    stack<int> st;
//    for(int &it:arr1){
//     st.push(it);
//    }

//    while(!st.empty()){
//     cout<<st.top()<<",";
//     st.pop();
//    }

//    return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // Array 1
//     vector<int> arr1 = {12, 15, 14, 13, 8};
//     int n=arr1.size();
//     vector<int> ans(n);
//     for(int i=0;i<n;i++){
//         ans[i]=arr1[n - 1- i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<",";
//     }

//     return 0;
// }

//TWO POINTER
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Array 1
    vector<int> arr1 = {12, 15, 14, 13, 8};
    int n=arr1.size();
    int start=0;
    int end=n-1;
    while(start < end){
        int temp=arr1[start];
        arr1[start]=arr1[end];
        arr1[end]=temp;
        start++;
        end--; 
    }

     for(int i=0;i<n;i++){
        cout<<arr1[i]<<",";
    }

    return 0;
}
