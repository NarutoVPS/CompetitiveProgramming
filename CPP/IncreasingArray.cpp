/*
	You are given an array of n integers. 
	You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
	On each turn, you may increase the value of any element by one. What is the minimum number of turns required?

	Input
		The first input line contains an integer n: the size of the array.
		Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

	Output
		Print the minimum number of turns.

	Constraints
		1≤n≤2⋅105
		1≤xi≤109

	Example
		Input:
			5
			3 2 5 1 7

		Output:
			5
*/

#include <bits/stdc++.h>
using namespace std;

// O(n) time | O(1) space
long long solve(vector<long long> num){
	if (num.size() == 1)
		return 0;

	long long turns{};
	for (int i{1}; i<num.size(); i++){
		if (num[i] < num[i-1]){
			turns += (num[i-1] - num[i]);
			num[i] += (num[i-1] - num[i]);
		}
	}

	return turns;
}

int main(){
	// #ifndef NARUTO
	// freopen ("../input.txt", "r", stdin);
	// freopen ("../output.txt", "w", stdout);
	// #endif

	int n;
	cin>>n;

	vector<long long> num(n);
	for (int i{}; i<n; i++)
		cin>>num[i];

	cout<<solve(num);

	return 0;
}