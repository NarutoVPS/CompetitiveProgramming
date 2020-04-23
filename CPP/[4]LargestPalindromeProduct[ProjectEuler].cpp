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

bool isPalindrome(const int &num){
    int rem{}, rev{};
    int temp{num};
    while(temp){
        rem = temp%10;
        rev = rev*10 + rem;
        temp /= 10;
    }
    return num==rev;
}

int main(){
    int highest{}, product{};
    fo2(i, 999){
        fo2(j, 999){
            product = i*j;
            if(isPalindrome(product)){
                if(highest < product)
                    highest = product;
            }
        }
    }
    cout<<highest;
}