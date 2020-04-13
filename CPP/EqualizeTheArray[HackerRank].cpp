#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,_temp;
    vector<int> arr;
    set<int> unique;

    cin>>n;
    for(int i{};i<n;i++){
        cin>>_temp;
        arr.push_back(_temp);
        unique.insert(_temp);
    }

    int highestCount{},currentCount{};
    for(auto each:unique){
        currentCount = count(arr.begin(), arr.end(), each);
        if(currentCount > highestCount)
            highestCount = currentCount;
    }

    cout<<arr.size()-highestCount<<endl;
    return 0;
}