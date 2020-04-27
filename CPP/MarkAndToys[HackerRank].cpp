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
    int n,k;
    cin>>n>>k;

    vi prices(n);
    for(auto &each:prices)
        cin>>each;

    sort(prices);

    int temp{}, count{};
    fo4(prices){
        temp += each;
        if(temp > k)
            break;
        count++;
    }

    cout<<count<<endl;    
    
    return 0;
}