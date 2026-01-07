#include <bits/stdc++.h>
using namespace std;

int main() {

    // 🔹 Pure input line read kar rahe hain
    // Example input: [4, 5, 0, -2, -3, 1]
    string line;
    getline(cin, line);

    vector<int> arr;     // yahan numbers store honge
    string temp = "";    // ek number ko character by character banane ke liye

    // 🔹 Input parsing: string se integers nikal rahe hain
    for (char c : line) {

        // agar digit ya minus sign hai, to number ka part hai
        if (isdigit(c) || c == '-') {
            temp += c;
        }
        // agar separator mila (comma, space, bracket etc.)
        else {
            if (!temp.empty()) {
                // complete number ban gaya, vector me daal do
                arr.push_back(stoi(temp));
                temp.clear(); // next number ke liye reset
            }
        }
    }

    // 🔴 LAST NUMBER PUSH KARNA BHOOLNA NAHI
    // kyunki loop ke end me separator nahi hota
    if (!temp.empty()) {
        arr.push_back(stoi(temp));
    }

    // 🔹 HashMap: remainder → kitni baar aaya
    unordered_map<int, int> mp;

    // 🔹 Important base case
    // remainder 0 pehle se ek baar maan lo
    // taaki prefixSum khud divisible ho to count ho sake
    mp[0] = 1;

    int k = 5;        // given divisor
    int sum = 0;      // prefix sum
    int result = 0;   // final answer (number of subarrays)

    // 🔹 Prefix sum + remainder logic
    for (int i = 0; i < arr.size(); i++) {

        // prefix sum banate jao
        sum += arr[i];

        // remainder nikaalo
        int rem = sum % k;

        // 🔴 C++ me negative remainder aa sakta hai
        // isliye normalize karna zaroori hai
        if (rem < 0) {
            rem += k;
        }

        // agar ye remainder pehle aa chuka hai,
        // to utni subarrays possible hain
        if (mp.find(rem) != mp.end()) {
            result += mp[rem];
        }

        // current remainder ka count badha do
        mp[rem]++;
    }

    // 🔹 Final answer print karo
    cout << result << endl;

    return 0;
}
