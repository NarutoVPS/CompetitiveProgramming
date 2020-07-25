/*
    Shekhar is a bomb defusal specialist. He once encountered a bomb that can be defused only by a secret code. He is given a number N and a number K. And he is also given permutation of first N natural numbers . The defusal code is the largest permutation possible by doing atmost K swaps among a pair of the given permutation. Help him to find the final permutation.

    Input Format
        First line contains ​an integer N and an integer k. The next line contains N space separated integers denoting the given permutation.

    Constraints
        1 <= n <= 10^5 1<= K <= 10^9

    Output Format
        The final permutation of the numbers with every number separated by a space with other number.

    Sample Input
        5 2
        3 4 1 2 5

    Sample Output
        5 4 3 2 1

    Explanation
        First we can swap 5 with 3 which gives us 5 4 1 2 3 and then we can swap 3 and 1 which gives us 5 4 3 2 1.
*/

#include <bits/stdc++.h>
using namespace std;

// O(nk) Time | O(1) Space
vector<int> solve(vector<int> &num, int k, int n) {
    if (k >= n) {
        sort(num.begin(), num.end(), greater<int>());
        return num;
    }

    int j{};
    while (k) {
        int i = max_element(num.begin() + j, num.end()) - num.begin();
        if (i != j) {
            swap(num[i], num[j]);
            k--;
        }
        j++;
    }
    return num;
}

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> num(n);

    for (int &e : num)
        cin>>e;

    solve(num, k, n);
    for (int &e : num)
        cout<<e<<" "; 
    return 0;
}