#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,d;
    cin>>n>>d;

    vector<int> arr(n);
    for(auto &each:arr)
        cin>>each;
    
    auto in = [&](int val){ return binary_search(arr.begin(), arr.end(), val); };  //since the elements is in ascending order, we can use binary search to check if an element exists

    cout<<count_if(arr.begin(), arr.end(), [&](int each){return in(each+d) && in(each+2*d);})<<endl;  // for each element x in arr count if x+d and x+2d exists
    return 0;
}