#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    multiset<int> X;
    int temp;
    for(int i{};i<n;i++){
        cin>>temp;
        X.insert(temp);
    } 

    int highest_count{},temp_count{};
    auto it = X.cbegin();

    while(it!=X.end()){
        temp_count = count_if(it, X.end(), [&](int item){return abs(item - *it)<2;});  //count from current iterator to the end if the codition satisfies
        if(temp_count>highest_count){
            highest_count = temp_count;
        }
        it++;
    }
    cout<<highest_count<<endl;
    return 0;
}