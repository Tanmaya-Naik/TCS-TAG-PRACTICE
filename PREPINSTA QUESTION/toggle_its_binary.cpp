#include <bits/stdc++.h>
using namespace std;

string tobinary(int num)
{
    if (num == 0)
    {
        return "0";
    }

    string binarynum = "";

    while (num > 0)
    {
        binarynum += (num % 2 == 0 ? '0' : '1');
        num = num / 2;
    }
    reverse(binarynum.begin(), binarynum.end());

    return binarynum;
}

int main()
{
    int num = 10;
    string ConvertedVal = tobinary(num);
    string ans = "";

    for (char ch : ConvertedVal)
    {
        if (ch == '1')
        {
            ans += '0';
        }
        else if (ch == '0')
        {
            ans += '1';
        }
    }

    cout << ans;

    return 0;
}