#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();
        
        // Step 1: Handle the left side.
        // Cars on the far left moving Left ('L') will never collide.
        // They drive off into the void. Skip them.
        int left = 0;
        while(left < n && directions[left] == 'L'){
            left++;
        }

        // Step 2: Handle the right side.
        // Cars on the far right moving Right ('R') also drive away safely.
        // Skip them too.
        int right = n - 1;
        while(right >= 0 && directions[right] == 'R'){
            right--;
        }

        // Step 3: Count collisions in the middle.
        // Everything left between 'left' and 'right' indexes is trapped.
        // If it's moving (L or R) inside this zone, it WILL crash.
        // Only 'S' (Stopped) cars don't add to the count themselves (but they cause others to crash).
        int collision = 0;
        while(left <= right){
            if(directions[left] != 'S'){
                collision++;
            }
            left++;
        }

        return collision;
    }
};

int main() {
    // 1. Create a variable to hold user input
    string inputDirections;

    // 2. Ask user for input (Standard Input)
    cout << "Enter the directions string (e.g., RLRSLL): ";
    cin >> inputDirections;

    // 3. Create the Solution object
    Solution sol;

    // 4. Call the function and store the result
    int result = sol.countCollisions(inputDirections);

    // 5. Print the output
    cout << "Total Collisions: " << result << endl;

    return 0;
}