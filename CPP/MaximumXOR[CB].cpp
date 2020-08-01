#include <bits/stdc++.h>
using namespace std;

long long solution(long long x, long long y) {
    if (x == y)
        return 0;

    long long mask = 1ll << ((sizeof(long long) * 8ll) - 1ll);

    long long n = sizeof(long long) * 8;

    while((x & mask) == (y & mask)) {
        x <<= 1;
        y <<= 1;
        n--;
    }

    return (1 << n) - 1;
}

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