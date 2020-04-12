#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> heights;
    int temp;
    for(int i{};i<26;i++){
        cin>>temp;
        heights.push_back(temp);
    }

    int highest{},count{};
    string alpha;
    cin>>alpha;
    for(auto each:alpha){
        count++;
        if(heights.at((int)each-97) > heights.at(highest))  //'a' equals 97 when converted to int 
            highest = (int)each-97;
    }
    cout<<count*heights.at(highest)<<endl;
}