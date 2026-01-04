#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int suffix[n];

    // Base case
    suffix[n - 1] = 1;   // identity for multiplication

    // Build suffix product
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * arr[i + 1];
    }

    cout << "Suffix Product Array:\n";
    for (int i = 0; i < n; i++) {
        cout << suffix[i] << " ";
    }

    return 0;
}
