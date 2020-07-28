/*
    We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once. Find the unique number. Only use - bitwise operators, and no extra space.

    Input Format
        First line contains the number n. Second line contains n space separated number.

    Constraints
        N < 10^5

    Output Format
        Output a single line containing the unique number

    Sample Input
        7
        1 1 1 2 2 2 3

    Sample Output
        3

    Explanation
        3 is present only once
*/

#include <bits/stdc++.h>
using namespace std;

// O(n) Time | O(1) Space
int main() {
    int n;
    cin>>n;

    vector<int> sum_bits(64);
    int x;
    for (int i{}; i < n; i++) {
        cin>>x;
        int j{};
        while(x > 0) {
            sum_bits[j] += (x & 1);
            j++;
            x = x >> 1;
        }
    }

    int p = 1, ans{};
    for (int i {}; i < 64; i++) {
        ans += (sum_bits[i] % 3) * p;
        p = p << 1;
    }
    cout<<ans<<endl;
    
    return 0;
}
