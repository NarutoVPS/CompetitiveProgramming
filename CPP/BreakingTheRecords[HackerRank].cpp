#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n{},temp;
    cin>>n;

    vector<int> scores;

    for(int i{};i<n;i++){
        cin>>temp;
        scores.push_back(temp);
    }

    int highest{scores.at(0)},lowest{scores.at(0)};
    int highest_count{}, lowest_count{};
    for(auto &each:scores){
        if(each>highest){
            highest_count++;
            highest = each;
        }
        if(each<lowest){
            lowest_count++;
            lowest = each;
        }
    }
    cout<<highest_count<<" "<<lowest_count<<endl;
}