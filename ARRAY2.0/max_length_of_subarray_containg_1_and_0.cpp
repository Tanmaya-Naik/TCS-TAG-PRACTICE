     #include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // STEP 2: HashMap to store
    // prefixSum -> first index where it appears
    unordered_map<int, int> prefixIndex;

    int sum = 0;      // prefix sum
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        sum += (arr[i]==0?-1:1);

        // CASE 1:
        // If prefix sum becomes 0 at index i,
        // then subarray from 0 to i has sum 0
        if (sum == 0) {
            maxLen = max(maxLen, i + 1);
        }

        // CASE 2:
        // If same prefix sum has appeared before,
        // then subarray between previous index+1 and i has sum 0
        if (prefixIndex.find(sum) != prefixIndex.end()) {
            int prevIndex = prefixIndex[sum];
            int len = i - prevIndex;
            maxLen = max(maxLen, len);
        }
        // CASE 3:
        // Store the first occurrence of this prefix sum
        // (important for maximum length)
        else {
            prefixIndex[sum] = i;
        }
    }

    cout << maxLen;
    return 0;
}


  
  
                    //BRUTE FORCE APPROACH
  
  // #include <bits/stdc++.h>
                        // using namespace std;

                        // int main()
                        // {

                        // int n;
                        // cin>>n;

                        // int zero=0;
                        // int one=0;
                        // int maxlen=0;

                        // vector<int> arr(n);
                        // for(int i=0;i<n;i++)
                        // {

                        // cin>>arr[i];

                        // }

                        // for(int i=0;i<n;i++)
                        // {
                        // zero=0;
                        // one=0;
                        // for(int j=i;j<n;j++)
                        // {
                        // if(arr[j]==0)
                        // {
                        // zero++;
                        // }
                        // else
                        // {
                        // one++;
                        // }

                        // if(zero == one)
                        // {
                        // maxlen=max(maxlen,j-i+1);
                        // }
                        // }
                        // }

                        // cout<<maxlen;
                        // return 0;
                        // }


                        