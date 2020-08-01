/*
	Given two integers l and r , your task is to find the maximum xor of two integers both of which lying between l and r inclusive.

	Input Format
		The first line contains l and r separated by a space.

	Constraints
		l, r<=10^18

	Output Format
		Output is a single number denoting the maximum xor

	Sample Input
		79242383109441603 533369389165030783

	Sample Output
		576460752303423487
*/

#include <bits/stdc++.h>
using namespace std;

// O(1) Time | O(1) Space [Since the value of mask will be same for any number]
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

	/*  Naive Solution
		long long ans{};
		for (long long i{x}; i<=y; i++) {
			for (long long j{i}; j<=y; j++) {
				if ((i ^ j) > ans)
					ans = i ^ j;
			}
		}
		cout<<ans<<endl;
	*/
	cout<<solution(min(x, y), max(x, y))<<endl;;
	return 0;
}