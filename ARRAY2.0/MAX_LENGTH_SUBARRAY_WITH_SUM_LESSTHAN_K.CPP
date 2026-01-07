// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main(){
//     int arr[]={2,1,3,4,1};
//     int n=sizeof(arr)/sizeof(int);
//     int k=7;
//     int maxcount=0;
    
//     for(int i=0;i<n;i++){
//         int sum=0;
//         int count=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             if(sum < k){
//                 count+=1;
//             }
//             else{
//                 break;
//             }
//         }
//         maxcount=max(maxcount,count);
//     }
//     cout<<"The length of the maximum sum less than k is "<<maxcount<<endl;
//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    // Input array (all positive elements)
    int arr[] = {2, 1, 3, 4, 1};
    int n = sizeof(arr) / sizeof(int);

    // Target sum constraint
    int k = 7;

    // Sliding window variables
    int sum = 0;        // current sum of the window
    int i = 0;          // left boundary of the window
    int maxcount = 0;   // maximum valid window length found so far

    // j is the right boundary of the window
    for (int j = 0; j < n; j++) {

        // Expand the window by including arr[j]
        sum += arr[j];

        // If window becomes invalid (sum >= k),
        // shrink it from the left until it becomes valid again
        while (sum >= k) {
            sum -= arr[i];
            i++;
        }

        // At this point, sum < k is guaranteed,
        // so the current window [i ... j] is valid
        int currentLength = j - i + 1;
        maxcount = max(maxcount, currentLength);
    }

    cout << "The length of the maximum sum less than k is "
         << maxcount << endl;

    return 0;
}
