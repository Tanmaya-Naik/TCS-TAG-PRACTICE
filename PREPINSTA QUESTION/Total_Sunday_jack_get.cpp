#include <bits/stdc++.h>
using namespace std;

int main() {

    // weekdays in order
    string arr[7] = {"sun", "mon", "tue", "wed", "thu", "fri", "sat"};

    string s;
    int n;

    // asking user for inputs
    cout << "Enter the starting day of the month (sun/mon/tue/wed/thu/fri/sat): ";
    cin >> s;

    cout << "Enter number of days in the month: ";
    cin >> n;

    int input_day = 0;
    int count = 0;

    // finding index of the starting day
    for(int i = 0; i < 7; i++){
        if(s == arr[i]){
            input_day = i;
            break;
        }
    }

    // formula to find the first Sunday
    int first_sunday = 1 + (7 - input_day) % 7;

    // checking how many Sundays fall within n days
    if(first_sunday > n){
        count = 0;
    }
    else{
        count = 1 + (n - first_sunday) / 7;
    }

    cout << "Total Sundays Jack gets: " << count << endl;

    return 0;
}
