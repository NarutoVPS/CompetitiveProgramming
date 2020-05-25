#include <bits/stdc++.h>
using namespace std;

// O(n) time | O(1) space
int solve(vector<long long> num){
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
	#ifndef NARUTO
	freopen ("../input.txt", "r", stdin);
	freopen ("../output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;

	vector<long long> num(n);
	for (int i{}; i<n; i++)
		cin>>num[i];

	cout<<solve(num);

	return 0;
}