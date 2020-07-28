#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> sum_bits(64);
    int x;
    for (int i{}; i < n; i++) {
        cin>>x;
        int j{};
        while(x > 0) {
            sum_bits[j] += (x & 1);
            j++;
            x = x >> 1;
        }
    }

    int p = 1, ans{};
    for (int i {}; i < 64; i++) {
        ans += (sum_bits[i] % 3) * p;
        p = p << 1;
    }
    cout<<ans<<endl;
    
    return 0;
}
