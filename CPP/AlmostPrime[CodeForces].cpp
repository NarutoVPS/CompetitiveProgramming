/*
    A number is called almost prime if it has exactly two distinct prime divisors. For example, numbers 6, 18, 24 are almost prime, while 4, 8, 9, 42 are not. Find the amount of almost prime numbers which are between 1 and n, inclusive.

    Input
        Input contains one integer number n (1 ≤ n ≤ 3000).

    Output
        Output the amount of almost prime numbers between 1 and n, inclusive.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int *prime) {
    vector<int> almostprime(3005, 0);
    prime[0] = prime[1] = 0;
    for (int i{2}; i <= 3000; i++) {
        if (prime[i]) {
            for (int j{2*i}; j <= 3000; j += i) {
                prime[j] = 0;
                almostprime[j]++;
            }
        }
    }
    return almostprime;
}

int main() {
    int prime[3005] = {1};
    for (int i{}; i < 3005; i++) {
        prime[i] = 1;
    }
    int n;
    cin>>n;

    auto almostprime = sieve(prime);
    int ans{};
    for(int i{}; i<=n; i++) {
        if (almostprime[i] == 2)
            ans++;
    }
    cout<<ans<<endl;
}
