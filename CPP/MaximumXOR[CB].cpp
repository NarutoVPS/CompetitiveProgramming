#include <bits/stdc++.h>
using namespace std;

int main () {
	long long x, y;
	cin>>x>>y;

	long long ans{};
	for (long long i{x}; i<=y; i++) {
		for (long long j{i}; j<=y; j++) {
			if ((i ^ j) > ans)
				ans = i ^ j;
		}
	}
	cout<<ans<<endl;
	return 0;
}