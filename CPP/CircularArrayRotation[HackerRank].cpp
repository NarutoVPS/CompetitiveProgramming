#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,q;
    cin>>n>>k>>q;

    list<int> arr;
    int temp;
    for(int i{};i<n;i++){
        cin>>temp;
        arr.insert(arr.end(), temp);
    }

    vector<int> query;
    for(int i{};i<q;i++){
        cin>>temp;
        query.push_back(temp);
    }

    for(int i{};i<k;i++){
        arr.push_front(arr.back());
        arr.pop_back();
    }

    for(auto each:query){
        auto it = arr.cbegin();
        advance(it, each);
        cout<<*it<<endl;
    }

    return 0;
}