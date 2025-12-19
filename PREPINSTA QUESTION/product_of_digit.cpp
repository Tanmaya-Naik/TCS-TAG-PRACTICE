#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Take value of N from the user"<<endl;
    cin>>n;

    int temp=n;
    int ans=1;
    while(temp > 0){
        int lastdigit=temp%10;
        if(lastdigit == 0){
            lastdigit=1;
        }
        ans*=lastdigit;
        temp=temp/10;
    }

    cout<<"The Product of all the digit of the number N is "<<ans<<endl;
    return 0;
}


//If asked take input as a string then

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     cout<<"Take input from the user: ";
//     string s;
//     cin>>s;
//     int product=1;
//     for(auto it:s){
//         if(it == '0'){
//             it='1';
//         }
//         product*=(it-'0');
//     }

//     cout<<"The price of the product is: "<<product<<endl;
//     return 0;
// }