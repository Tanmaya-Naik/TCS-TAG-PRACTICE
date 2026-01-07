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


            //OPTIMISED ONE 

    // FIND THE LONGEST SUBARRAY WITH SUM K WITH POSITIVE AND NEGATIVE VALUE
#include <iostream>
#include <vector>
#include <unordered_map>
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

    // This map stores:
    // key   -> prefix sum value
    // value -> earliest index where this prefix sum occurred
    unordered_map<int, int> prefixIndex;

    int sum = 0;       // running prefix sum
    int maxLen = 0;    // answer: longest length found

    for (int i = 0; i < n; i++) {
        sum += arr[i];   // prefix sum till index i

        // Case 1:
        // If prefix sum itself is equal to k,
        // then subarray from index 0 to i has sum k
        if (sum == k) {
            maxLen = i + 1;
        }

        // Case 2:
        // We want (sum - previousPrefixSum) = k
        // So previousPrefixSum = sum - k
        int rem = sum - k;

        // If this required prefix sum was seen before,
        // then subarray from (previousIndex + 1) to i has sum k
        if (prefixIndex.find(rem) != prefixIndex.end()) {
            int len = i - prefixIndex[rem];
            if (len > maxLen) {
                maxLen = len;
            }
        }

        // Store the prefix sum ONLY if it is not already present
        // We store the earliest index to maximize subarray length
        if (prefixIndex.find(sum) == prefixIndex.end()) {
            prefixIndex[sum] = i;
        }
    }

    // Output only the answer (TCS-safe)
    cout << maxLen;

    return 0;
}
