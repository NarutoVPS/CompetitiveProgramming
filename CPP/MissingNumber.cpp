/*
	You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

	Input
		The first input line contains an integer n.
		The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

	Output
		Print the missing number.

	Constraints
		2≤n≤2⋅105

	Example
		Input:
			5
			2 3 1 5

		Output:
			4
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	// #ifndef NARUTO
	// freopen ("../input.txt", "r", stdin);
	// freopen ("../output.txt", "w", stdout);
	// #endif

	int n{};
	cin>>n;
	vector<int> num(n);
	for(int i{}; i<n; i++)
		cin>>num[i];

	sort(num.begin(), num.end());
	for(int i{1}; i<=n; i++){
		if (num[i] != i){
			cout<<i<<"\n";
			break;
		}
	}
	return 0;
}

// O(n) time | O(1) space