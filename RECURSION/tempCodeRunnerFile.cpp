#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int K;
    cin >> K;

    vector<bool> possible(K+1,false);
    //base case
    possible[0]=true;
    
    for(int x:arr){
        for(int s=K;s>=x;s++){
            if(possible[s-x]==true){
                possible[s]=true;
            }

        }
    }

     if (possible[K])
        cout << "YES";
    else
        cout << "NO";

    return 0;

}