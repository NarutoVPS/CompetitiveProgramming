#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    long long int n;

    cin>>str>>n;

    long long int noOfStr = n/str.size();
    long long int extra = n-(noOfStr*str.size());

    long long noOfA{};
    for(auto each:str){
        if(each=='a')
            noOfA++;
    }
    long long total = noOfStr*noOfA;
    for(int i{};i<extra;i++){
        if(str[i]=='a')
            total++;
    }
    cout<<total<<endl;
    return 0;
}