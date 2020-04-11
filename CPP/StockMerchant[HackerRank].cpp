#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n;
    vector<int> arr;

    cin>>n;
    int temp;

    for(int i{};i<n;i++){
        cin>>temp;
        arr.push_back(temp);
    }

    set<int> done;
    int pair{};
    for(auto each:arr){
        if(done.find(each)==done.end()){
            done.insert(each);
            pair += count(arr.begin(), arr.end(), each)/2;
        }
    }
    cout<<pair<<endl;
}