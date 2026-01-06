#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    // check empty array
    if (n == 0) {
        cout << "Array is empty" << endl;
        return 0;
    }

    int k = 7;
    k = k % n;   // normalize rotation

    vector<int> temp;

    // store first k elements
    for (int i = 0; i < k; i++) {
        temp.push_back(arr[i]);
    }

    // shift remaining elements left
    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }

    // copy temp elements at the end
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }

    // print result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }

    return 0;
}
