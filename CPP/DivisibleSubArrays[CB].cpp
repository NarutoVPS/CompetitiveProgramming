/*
    You are given N elements, a1,a2,a3….aN. Find the number of good sub-arrays.
    A good sub-array is a sub-array [ai,ai+1,ai+2….aj] such that (ai+ai+1+ai+2+….+aj) is divisible by N.

    Input Format
        The first line contains the number of test cases T. First line of each test case contains an integer N denoting the number of elements. Second line of each test case contains N integers, a1, a2, a3….aN, where ai denotes the ith element of the array.

    Constraints
        1<=T<=10
        1<=N<=10^5
        |ai|<=10^9

    Output Format
        Output a single integer denoting the number of good sub-arrays.

    Sample Input
        2
        5
        1 1 1 1 1
        5
        5 5 5 5 5
        
    Sample Output
        1
        15

    Explanation
        In first test case, there is only one sub-array [1, 1, 1, 1, 1], such that 1+1+1+1+1=5, which is divisible by N=5
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

// O(n) Time || O(n) Space
int main() {
    ll t;
    cin>>t;
    
    while(t--) {
        ll n;
        cin>>n;

        vector<ll> num(n), fre(n);
        ll sum{};
        
        fre[0] = 1;
        for(int i{}; i<n; i++) {
            cin>>num[i];
            sum +=num[i];
            sum %= n;
            sum = (sum + n) % n;
            fre[sum]++;
        }

        ll ans{};
        for(int i{}; i<n; i++) {
            ans += fre[i] * (fre[i] - 1) / 2;
        }

        cout<<ans<<endl;
    }
}
