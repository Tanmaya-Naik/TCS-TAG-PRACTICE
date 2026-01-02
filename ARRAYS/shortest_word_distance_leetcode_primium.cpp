#include <bits/stdc++.h>
using namespace std;

/*
    Function: shortestDistance
    -----------------------------------
    Given:
        - words: array (vector) of strings
        - word1, word2: two target words that exist in the array

    Task:
        Return the minimum distance (absolute difference of indices)
        between any occurrence of word1 and word2 in the array.

    Example:
        words = ["the", "quick", "brown", "fox", "quick"]
        word1 = "the", word2 = "fox"  -> answer = 3
        word1 = "quick", word2 = "fox" -> answer = 1
*/
int shortestDistance(const vector<string> &words, const string &word1, const string &word2) {
    int n = words.size();

    // last seen indices of word1 and word2
    int idx1 = -1;   // will store last index where word1 appears
    int idx2 = -1;   // will store last index where word2 appears

    // initialize answer with a large value
    int minDist = n; // maximum possible distance is n-1, so n is safe as "infinity"

    // single pass through the array
    for (int i = 0; i < n; i++) {
        // if current word matches word1, update idx1
        if (words[i] == word1) {
            idx1 = i;
        }
        // if current word matches word2, update idx2
        else if (words[i] == word2) {
            idx2 = i;
        }

        // if both words have been seen at least once,
        // update the minimum distance
        if (idx1 != -1 && idx2 != -1) {
            int currentDist = abs(idx1 - idx2);
            minDist = min(minDist, currentDist);
        }
    }

    return minDist;
}

int main() {
    

    vector<string> words = {"the", "quick", "brown", "fox", "quick"};
    string word1 = "quick";
    string word2 = "fox";

    int ans = shortestDistance(words, word1, word2);

    cout << "Minimum distance between \"" << word1
         << "\" and \"" << word2 << "\" is: " << ans << endl;

    return 0;
}
