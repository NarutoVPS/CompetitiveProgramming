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
