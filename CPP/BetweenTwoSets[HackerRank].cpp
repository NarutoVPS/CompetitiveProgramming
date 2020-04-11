#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,m,temp;
    cin>>n>>m;

    vector<int> A,B;
    for(int i{};i<n;i++){
        cin>>temp;
        A.push_back(temp);
    }
    for(int i{};i<m;i++){
        cin>>temp;
        B.push_back(temp);
    }
    int count{0};
    for(int i{*max_element(A.begin(), A.end())};i<=*min_element(B.begin(), B.end());i++){
        if(all_of(A.begin(), A.end(), [&](int x) {return i%x==0;})){
            if(all_of(B.begin(), B.end(), [&](int y) {return y%i==0;} ))
                count++;
        }
    }
    cout<<count<<endl;
    return 0;
}