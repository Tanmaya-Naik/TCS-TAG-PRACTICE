#include <bits/stdc++.h>
using namespace std;

bool found = false;

void getSubset(int i, int currentSum, vector<int>& arr, int target) {
    // If we already found a valid subset, stop further work
    if (found) return;

    // If current sum becomes exactly target, success
    if (currentSum == target) {
        found = true;
        return;
    }

    // If index ends or sum exceeds target, stop this path
    if (i == arr.size() || currentSum > target) {
        return;
    }

    // INCLUDE arr[i]
    getSubset(i + 1, currentSum + arr[i], arr, target);

    // EXCLUDE arr[i]
    getSubset(i + 1, currentSum, arr, target);
}

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int totalSum = 0;
    for (int x : arr) totalSum += x;

    // If total sum is odd, equal partition impossible
    if (totalSum % 2 != 0) {
        cout << 0;
        return 0;
    }

    int target = totalSum / 2;

    getSubset(0, 0, arr, target);

    if (found)
        cout << target;
    else
        cout << 0;

    return 0;
}
//GO TO THE OPTIMISED CODE FOR DISJOIN WITH MAXIMUM SUM FOR THE BETTER SOLUTION OF THIS EXACT CODE
