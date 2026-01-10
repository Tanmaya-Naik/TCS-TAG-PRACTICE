#include <bits/stdc++.h>
using namespace std;

/*
    Function to check whether a given string is a palindrome
    Time Complexity: O(length of string)
*/
bool ispalin(string str) {
    int start = 0;
    int end = str.size() - 1;

    while (start < end) {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }
    return true;
}

/*
    Recursive backtracking function to generate all palindromic partitions

    s          -> remaining string to be partitioned
    partition -> current partition being formed
    ans       -> stores all valid palindromic partitions
*/
void getallpallindrome(string s,
                       vector<string> &partition,
                       vector<vector<string>> &ans) {

    // Base case: if no characters left, store current partition
    if (s.size() == 0) {
        ans.push_back(partition);
        return;
    }

    // Try all possible prefixes of the string
    for (int i = 0; i < s.size(); i++) {

        // Take prefix substring from index 0 to i
        string part = s.substr(0, i + 1);

        // Check if the prefix is a palindrome
        if (ispalin(part)) {

            // Choose
            partition.push_back(part);

            // Explore remaining substring
            getallpallindrome(s.substr(i + 1), partition, ans);

            // Backtrack (undo choice)
            partition.pop_back();
        }
    }
}

int main() {
    string str;
    getline(cin, str);

    vector<string> partition;
    vector<vector<string>> ans;

    // Generate all palindromic partitions
    getallpallindrome(str, partition, ans);

    // Print result
    for (const auto &row : ans) {
        for (const auto &it : row) {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}
