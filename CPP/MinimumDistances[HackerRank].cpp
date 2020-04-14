#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;


    vector<int> arr(n);
    for(auto &each:arr)
        cin>>each;

    auto iter = arr.begin();
    int minDistance{n};
    for(auto each:arr){
        iter++;  //else it will find itself and minDistance will always be 0
        auto iterFind = find(iter, arr.end(), each);
        if(iterFind!=arr.end()){
            auto dist = distance(iter, iterFind);
            if(dist < minDistance)
                minDistance = dist;
        }
    }
    if(minDistance>=n)
        cout<<-1<<endl;
    else
        cout<<minDistance+1<<endl;  //+1 since it only counts the no of elements between the range exclusive
    return 0;
}