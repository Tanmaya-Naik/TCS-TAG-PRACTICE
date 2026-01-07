#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Convert 0 to -1
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) arr[i] = -1;
    }

    unordered_map<int, int> prefixIndex;

    int sum = 0;
    int maxLen = 0;
    int start = -1, end = -1;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        // Case 1: subarray from 0 to i
        if (sum == 0 && i + 1 > maxLen) {
            maxLen = i + 1;
            start = 0;
            end = i;
        }

        // Case 2: same prefix sum seen before
        if (prefixIndex.find(sum) != prefixIndex.end()) {
            int len = i - prefixIndex[sum];
            if (len > maxLen) {
                maxLen = len;
                start = prefixIndex[sum] + 1;
                end = i;
            }
        } else {
            // store first occurrence only
            prefixIndex[sum] = i;
        }
    }

    cout << "Length: " << maxLen << "\n";
    cout << "Start index: " << start << "\n";
    cout << "End index: " << end << "\n";

    return 0;
}
