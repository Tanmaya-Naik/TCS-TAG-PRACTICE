#include <bits/stdc++.h>
using namespace std;

int main() {

    /* -------------------- INPUT -------------------- */

    int N;
    cin >> N;                      // Number of elements

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];             // Read array elements
    }

    /* -------------------- TOTAL SUM -------------------- */

    int totalSum = 0;
    for (int x : arr) {
        totalSum += x;             // Calculate total sum of array
    }

    /*
        If total sum is odd, it is IMPOSSIBLE to divide
        array into two subsets with equal sum.
    */
    if (totalSum % 2 != 0) {
        cout << 0;
        return 0;
    }

    /*
        Target sum for each subset.
        If we can form ONE subset with sum = target,
        the remaining elements will also sum to target.
    */
    int target = totalSum / 2;

    /* -------------------- POSSIBLE ARRAY -------------------- */

    /*
        possible[s] = true
        means: "There exists some subset whose sum is s"
    */
    vector<bool> possible(target + 1, false);

    /*
        Base case:
        Empty subset always exists and its sum is 0
    */
    possible[0] = true;

    /* -------------------- MAIN LOGIC -------------------- */

    /*
        Process each element one by one
        This loop corresponds to recursion index 'i'
    */
    for (int x : arr) {

        /*
            Traverse sums BACKWARD to ensure
            each element is used only once.
        */
        for (int s = target; s >= x; s--) {

            /*
                If sum (s - x) was achievable before,
                then by including x, sum s is achievable now.
            */
            if (possible[s - x]) {
                possible[s] = true;
            }
        }
    }

    /* -------------------- RESULT -------------------- */

    /*
        If target sum is achievable,
        maximum equal partition sum is target.
    */
    if (possible[target])
        cout << target;
    else
        cout << 0;

    return 0;
}
