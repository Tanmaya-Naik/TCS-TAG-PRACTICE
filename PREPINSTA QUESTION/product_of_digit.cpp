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
        ans*=lastdigit;
        temp=temp/10;
    }

    cout<<"The Product of all the digit of the number N is "<<ans<<endl;
    return 0;
}