#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,temp;
    vector<int> p;

    cin>>n;
    for(int i{};i<n;i++){
        cin>>temp;
        p.push_back(temp);
    }

    for(int i{1};i<=n;i++){
        auto iter = find(p.cbegin(), p.cend(), i);
        int index = distance(p.cbegin(), iter)+1;
        auto iter2 = find(p.cbegin(), p.cend(), index);
        cout<<distance(p.cbegin(), iter2)+1<<endl;
    }
}