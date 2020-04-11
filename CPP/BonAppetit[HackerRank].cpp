#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> bill;
    int temp;
    for(int i{};i<n;i++){
        cin>>temp;
        bill.push_back(temp);
    }

    int amount;
    cin>>amount;

    int i{},actual_amount{};
    while(i!=n){
        if(i==k){
            i++;
            continue;
        }
        actual_amount += bill.at(i);
        i++;
    }

    if(abs(actual_amount/2-amount)==0)
        cout<<"Bon Appetit"<<endl;
    else
        cout<<abs(actual_amount/2-amount)<<endl;
}