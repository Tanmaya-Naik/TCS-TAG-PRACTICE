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

    int prefix[n];

    // Base case
    prefix[0] = 1;   // identity for multiplication

    // Build prefix product
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * arr[i - 1];
    }

    cout << "Prefix Product Array:\n";
    for (int i = 0; i < n; i++) {
        cout << prefix[i] << " ";
    }

    return 0;
}
