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
    int a{},b{},c{};
    int limit{500};

    fo2(a, limit){
        fo2(b, limit){
            c = 1000 - (a + b);   //since a + b + c = 1000
            if(a*a + b*b == c*c){
                cout<<a*b*c<<endl;
                exit(0);
            }
        }
    }
    return 0;
}


/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/