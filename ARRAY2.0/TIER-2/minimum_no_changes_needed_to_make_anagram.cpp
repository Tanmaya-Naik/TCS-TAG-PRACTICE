#include <iostream>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <algorithm>
#include <limits.h>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;

    unordered_map<char,int> freq1;
    unordered_map<char,int> freq2;

    for(char c:s1){
        freq1[c]++;
    }

    for(char c:s2){
        freq2[c]++;
    }

    int diff=0;
    for(auto it:freq1){
        char ch=it.first;
        int c1=it.second;
        int c2=freq2[ch];
        diff+=abs(c1-c2);

    }

    //for char that only present in  only freq2 
    for(auto it:freq2){
        char ch=it.first;
        if(freq1.find(ch)==freq1.end()){
            diff+=it.second;
        }
    }

    int result=diff/2;

    cout<<result;
    return 0;

    
}

