#include <bits/stdc++.h>

using namespace std;

vector<bool> isPrime(int n){
    vector<bool> prime(n, true);
    prime[0]=false;
    prime[1]=false;
    int m = sqrt(n);

    for (int i=2; i<=m; i++){
        if (prime[i]){
            for (int k=i*i; k<=n; k+=i)
                prime[k]=false;
        }
    }
    return prime;
}

int main(){
    auto result = isPrime(2000000);

    long long sum{};
    for(int i{}; i<result.size(); ++i){
        if(result[i])
            sum += i;
    }

    cout<<sum<<endl;
    return 0;
}


/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/