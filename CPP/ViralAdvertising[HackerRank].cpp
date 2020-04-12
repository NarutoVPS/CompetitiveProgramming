#include <bits/stdc++.h>

using namespace std;

int main(){
    int n{};
    cin>>n;

    int recipient{5},i{},total{};
    while(i != n){
        total += recipient/2;
        recipient = (recipient/2)*3;
        i++;
    }
    cout<<total<<endl;
    return 0;
}