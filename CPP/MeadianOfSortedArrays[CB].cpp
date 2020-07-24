/*
    We are given two sorted arrays of same size n. Find the median of an array formed after merging these two sorted arrays.

    Input Format
        First line contains the input n. Second and Third line contains n space separated integers.

    Constraints
        N < 1000

    Output Format
        Print the median in a single line.

    Sample Input
        5
        1 3 5 7 9
        2 4 6 8 10

    Sample Output
        5
        
    Explanation
        Merged Array: [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10] So the median element is 5
*/

#include <bits/stdc++.h>
using namespace std;

// O(nlog(n)) Time | O(1) Space
int solve(vector<int> &num, const int n) {
    sort(num.begin(), num.end());
    return num[n-1];
}

// O(n) Time | O(n) Space
int solve2(vector<int> &first, vector<int> &second, const int n) {
    int firstIdx{}, secondIdx{}, sortedArrIdx{};
    vector<int> sortedArr(2*n);

    while (sortedArrIdx <= n-1) {
        if (first[firstIdx] < second[secondIdx]) {
            sortedArr[sortedArrIdx] = first[firstIdx];
            firstIdx++;
        }
        else {
            sortedArr[sortedArrIdx] = second[secondIdx];
            secondIdx++;
        }
        sortedArrIdx++;
    }

    return sortedArr[n-1];
}
