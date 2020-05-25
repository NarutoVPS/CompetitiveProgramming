/*
	You are given a DNA sequence: a string consisting of characters A, C, G, and T. 
	Your task is to find the longest repetition in the sequence. 
	This is a maximum-length substring containing only one type of character.

	Input
		The only input line contains a string of n characters.

	Output
		Print one integer: the length of the longest repetition.

	Constraints
		1≤n≤106

	Example
		Input:
			ATTCGGGA

		Output:
			3
*/

#include <bits/stdc++.h>
using namespace std;

int solve(const string &str){
	if (!str.size())
		return 0;
	if (str.size() == 1)
		return 1;


	int maxCount{1}, current{1};

	for (int i{1}; i<str.size(); i++){
		if (str[i] == str[i-1]){
			current++;
			maxCount = max(maxCount, current);
		}
		else
			current = 1;
	}

	return maxCount;
}

int main(){
	// #ifndef NARUTO
	// freopen ("../input.txt", "r", stdin);
	// freopen ("../output.txt", "w", stdout);
	// #endif

	string str;
	cin>>str;

	cout<<solve(str);

	return 0;
}