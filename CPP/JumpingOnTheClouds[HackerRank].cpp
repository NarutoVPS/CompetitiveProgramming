#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,_temp;
    vector<int> c;

    cin>>n;

    for(int i{};i<n;i++){
        cin>>_temp;
        c.push_back(_temp);
    }

    c.push_back(0);    //appending an extra element to avoid out of range exception in below if condition
    int index{},jumps{};
    while(index!=n-1){
        if(c.at(index+2)!=1 && index+2<n)
            index = index+2;
        else    
            index++;
        jumps++;
    }
    cout<<jumps<<endl;
    return 0;
}