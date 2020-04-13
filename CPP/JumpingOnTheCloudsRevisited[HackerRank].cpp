#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,temp;
    vector<int> c;

    cin>>n>>k;
    for(int i{};i<n;i++){
        cin>>temp;
        c.push_back(temp);
    }

    int i{};
    int energy{100};
    while(true){
        i = (i+k)%n;
        if(c.at(i)==1)
            energy -= 2;
        energy -= 1;
        if(i==0)
            break;
    }
    cout<<energy<<endl;
    return 0;
}