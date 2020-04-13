#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int _temp;
    vector<int> arr;
    for(int i{};i<n;i++){
        cin>>_temp;
        arr.push_back(_temp);
    }

    int min;
    while(arr.size()){
        cout<<arr.size()<<endl;
        min = *min_element(arr.begin(), arr.end());  //check for min element

        for(int i{};i<arr.size();i++){    //find all the elements equal to min and erase it
            if(arr.at(i)==min){
                auto it = find(arr.begin(), arr.end(), min);
                arr.erase(it);
                i--;   //since tht ith index element will become (i-1)th index element due to erase operation
            }
        }

        for(int i{};i<arr.size();i++)    //subtract the remaining elements by min
            arr.at(i) -= min;
    }

    return 0;
}