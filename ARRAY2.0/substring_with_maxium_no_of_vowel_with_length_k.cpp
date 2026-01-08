#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' ||
            c == 'o' || c == 'u');
}

int main() {

    string s;
    getline(cin, s);   // input string

    int k;
    cin >> k;          // window size

    int count = 0;     // vowels in current window
    int maxCount = 0;

    int i = 0;

    for (int j = 0; j < s.length(); j++) {

        // add new character
        if (isVowel(s[j])) {
            count++;
        }

        // when window size becomes k
        if (j - i + 1 == k) {
            maxCount = max(maxCount, count);

            // remove outgoing character
            if (isVowel(s[i])) {
                count--;
            }
            i++;
        }
    }

    cout << maxCount;
    return 0;
}
