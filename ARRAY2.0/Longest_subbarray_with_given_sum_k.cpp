// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     cout<<"Take input: "<<endl;
//     int n;
//     cin>>n;

//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k=15;
//     int sum=0;
//     int count=0;
//     int maxcount=0;

//     for(int i=0;i<n;i++){
//         sum=0;
//         count=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             if(sum<k){
//                 count++;
//             }

//             if(sum>k){
//                 count=0;
//                 break;
//             }

//             if(sum==k){
//                 count++;
//                 maxcount=max(count,maxcount);
//             }
//         }
        
//     }
//     cout<<"The longest subarray with sum k is "<<maxcount<<endl;
//     return 0;

// }




            //OPTIMISED SLIDING WINDOW
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int i = 0, sum = 0, maxLen = 0;

    for (int j = 0; j < n; j++) {
        sum += arr[j];

        while (sum > k && i <= j) {
            sum -= arr[i];
            i++;
        }

        if (sum == k) {
            int currLen = j - i + 1;
            if (currLen > maxLen) {
                maxLen = currLen;
            }
        }
    }

    cout << maxLen;
    return 0;
}



