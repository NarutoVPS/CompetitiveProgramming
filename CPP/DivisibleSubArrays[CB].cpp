#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;
    cin>>t;
    
    while(t--) {
        ll n;
        cin>>n;

        vector<ll> num(n), fre(n);
        ll sum{};
        
        fre[0] = 1;
        for(int i{}; i<n; i++) {
            cin>>num[i];
            sum +=num[i];
            sum %= n;
            sum = (sum + n) % n;
            fre[sum]++;
        }

        ll ans{};
        for(int i{}; i<n; i++) {
            ans += fre[i] * (fre[i] - 1) / 2;
        }

        cout<<ans<<endl;
    }
}
