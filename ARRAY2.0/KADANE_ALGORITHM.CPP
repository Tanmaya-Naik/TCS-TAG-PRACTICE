#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Read the array
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // maxSum stores the maximum subarray sum found so far
    // Initialize with INT_MIN to handle all-negative arrays
    int maxSum = INT_MIN;

    // currSum stores the sum of the current subarray
    int currSum = 0;

    for (int i = 0; i < n; i++) {

        // Add current element to the running subarray sum
        currSum += arr[i];

        // Update maximum sum if current subarray is better
        if (currSum > maxSum) {
            maxSum = currSum;
        }

        // If current sum becomes negative,
        // discard this subarray and start fresh from next index
        if (currSum < 0) {
            currSum = 0;
        }
    }

    // Print the maximum subarray sum
    cout << maxSum;
    return 0;
}
