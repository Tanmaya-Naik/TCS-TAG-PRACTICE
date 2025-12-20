#include <iostream>
#include <vector>
using namespace std;

int main(){
    string str="";
    cout<<"Enter a string"<<endl;
    cin>>str;
    int n=str.length();
    int L=4;
    vector<string> boxes;

    for(int i=0;i<n;i+=L){
        string put="";
        for(int j=i;j< i+L && j < n;j++){
            put+=str[j];
        }

        boxes.push_back(put);
    }

    string maxbox="";
    int maxcnt=0;

    for(string st:boxes){
        int cnt=0;
        for(char ch:st){
            if(ch == 'a'){
                cnt++;
                
            }
        }

        if(cnt > maxcnt){
            maxcnt=cnt;
            maxbox=st;
        }
    }

    

    cout<<"The final box which contain maximun a is: "<<maxbox<<endl;
    cout<<"The number of a present in the maxbox is: "<<maxcnt<<endl;



    return 0;
}