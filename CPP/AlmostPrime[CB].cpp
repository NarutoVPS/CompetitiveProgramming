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
