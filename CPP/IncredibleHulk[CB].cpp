#include<bits/stdc++.h>
using namespace std;

int powerTwo(int n) {
	if (n <= 2)
		return 1;
	return log(n)/log(2);
}

int solution(int n) {
	int ans {1};
	int temp = powerTwo(n);

    int total{1 << temp};
	while (total < n) {
	    int rem = n - total;
		temp += powerTwo(rem);
		total += 1 << powerTwo(rem);
		ans++;
	}
	return ans;
}

int main() {
	int t;
	cin>>t;

	while (t--) {
		int n;
		cin>>n;

		cout<<solution(n)<<endl;
	}
	return 0;
}