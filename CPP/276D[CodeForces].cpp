#include <bits/stdc++.h>
using namespace std;

// O(1) Time | O(1) Space [Since the value of mask will be same for any number]
long long solution(long long x, long long y) {
    if (x == y)
        return 0;

    long long mask = 1ll << ((sizeof(long long) * 8ll) - 1ll);

    long long n = sizeof(long long) * 8ll;

    while((x & mask) == (y & mask)) {
        x <<= 1ll;
        y <<= 1ll;
        n--;
    }

    return (1ll << n) - 1ll;
}

int main () {
	long long x, y;
	cin>>x>>y;
    
	cout<<solution(min(x, y), max(x, y))<<endl;;
	return 0;
}