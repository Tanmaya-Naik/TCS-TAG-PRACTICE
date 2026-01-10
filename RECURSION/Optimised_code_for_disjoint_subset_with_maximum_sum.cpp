#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int totalSum = 0;
    for (int x : arr) totalSum += x;

    if (totalSum % 2 != 0) {
        cout << 0;
        return 0;
    }

    int K = totalSum / 2;

    vector<bool> possible(K + 1, false);
    possible[0] = true;

    for (int x : arr) {
        for (int s = K; s >= x; s--) {
            if (possible[s - x]) {
                possible[s] = true;
            }
        }
    }

    if (possible[K])
        cout << K;
    else
        cout << 0;

    return 0;
}
