// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     int sum=0;
//     int maxcount=0;


//     for(int i=0;i<n;i++){
//         sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             if(sum==k){
//                 int currcount=j-i+1;
//                 if(currcount > maxcount){
//                     maxcount=currcount;
//                 }
//             }
//         }

//     }

//     cout<<maxcount;
//     return 0;
    
// }