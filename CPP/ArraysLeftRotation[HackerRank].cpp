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

void Shift_left(vector<int> &vec){
    int toShift = vec[0];
    fo(i,vec.size()-1){
        vec[i] = vec[i+1];
    }
    vec[vec.size()-1] = toShift;
}

int main(){
    int n,d;
    cin>>n>>d;
    vi vec(n);

    for(auto &each : vec)
        cin>>each;
    
    fo(i,d)
        Shift_left(vec);
    fo4(vec)
        cout<<each<<" ";
    return 0;
}