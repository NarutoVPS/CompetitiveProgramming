#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,temp;
    set<int> leaderBoard;

    cin>>n;
    for(int i{};i<n;i++){
        cin>>temp;
        leaderBoard.insert(temp);
    }

    int m;
    vector<int> aliceScore;

    cin>>m;
    for(int i{};i<m;i++){
        cin>>temp;
        aliceScore.push_back(temp);
    }

    for(auto each:aliceScore){
        auto result = leaderBoard.insert(each);
        auto it = result.first;
        cout<<leaderBoard.size()-distance(leaderBoard.begin(), it)<<endl;
    }
    return 0;
}