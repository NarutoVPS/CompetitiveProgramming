/*
    Given an array A we have to find a permutation with maximum cost where cost of a permutation P is defined as P[i]*i for all i from 0 to n-1

    Input Format
        The first line contains an integer N, followed by N numbers in the next line denoting the elements of array A.

    Constraints
        N<=20
        Ai<=20.

    Output Format
        Output is a single number denoting the maximum cost.

    Sample Input
        5
        1 2 3 4 5

    Sample Output
        40

    Explanation
        Max cost can be obtained from permutation
        { 1, 2, 3, 4, 5 }
*/

#include <bits/stdc++.h>
using namespace std;

// O(1) Time | O(1) Space
int solution(const vector<int> &num) {
    int ans{}, i{};
    for (int e : num) {
        if (1 + (e >> 31) - (-e >> 31)) {
            ans += e * i;
        }
        i++;
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    
    vector<int> num(n);
	for (int &e : num)
		cin>>e;

	cout<<solution(num);
    cout<<"\n";
}
