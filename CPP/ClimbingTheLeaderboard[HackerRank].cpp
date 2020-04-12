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

    int tempCount{};
    for(auto each:aliceScore){
        leaderBoard.insert(each);
        for(auto iter {leaderBoard.rbegin()}; iter!=leaderBoard.rend(); iter++){  //reversing the set as it sorts the elements in ascending order
            if(*iter==each)
                break;
            tempCount++;
        }
        cout<<tempCount+1<<endl;
        tempCount = 0;
    }
    return 0;
}