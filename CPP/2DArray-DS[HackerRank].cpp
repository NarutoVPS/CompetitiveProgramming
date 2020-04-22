#include <bits/stdc++.h>

#define fo(i,n) for(int i{};i<n;i++)
#define fo2(i,n) for(int i{1};i<=n;i++)
#define fo3(n,m) for(int i{n};i<m;i++)
#define fo4(x) for(auto each:x)

#define all(x) x.begin(),x.end()
#define sort(x) sort(all(x))
#define sort2(x) sort(x.begin(),x.end(), greater<int>())

#define vi vector<int>
#define vll vector<long long>
#define mp make_pair

#define p(x) for(auto each:x) cout<<each<<endl;
#define p2(x ) for(auto each:x) cout<<each<<" ";

using namespace std;

int main(){
    vector<vector<int>> vec(6, vector<int> (6,0));

    for(int i{};i<vec.size();i++){
        for(int j = 0;j<vec.size();j++)
            cin>>vec.at(i).at(j);
    }
        
    int sum{},highest{};
    fo(i,4){
        fo(j,4){
            sum = vec[i][j] + vec[i][j+1] + vec[i][j+2] + vec[i+1][j+1] + vec[i+2][j] + vec[i+2][j+1] + vec[i+2][j+2];
            if(i==0 && j==0)  //if the initial sum is -ve
                highest = sum;
            if(sum>highest)
                highest = sum;
        }
    }
    cout<<highest<<endl;
    return 0;
}