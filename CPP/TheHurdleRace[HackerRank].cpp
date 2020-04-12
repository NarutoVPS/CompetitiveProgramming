#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> hurdles;
    int temp;
    for(int i{};i<n;i++){
        cin>>temp;
        hurdles.push_back(temp);
    }

    int maxEle = *max_element(hurdles.cbegin(), hurdles.cend());
    if(k>=maxEle)
        cout<<0<<endl;
    else
        cout<<maxEle-k<<endl;
}