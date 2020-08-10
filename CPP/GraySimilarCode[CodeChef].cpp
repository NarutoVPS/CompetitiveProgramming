#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long int n;
    cin>>n;

    vector<unsigned long long int> nums(n, 0);
    for (int i{}; i < n; i++) {
        cin >> nums[i];
    }

    if (n >= 130) {
        cout<<"Yes\n";
        return 0;
    }
    else {
        unsigned long long int d;
        for (int i{}; i < n; i++) {
            for (int j{i+1}; j < n; j++) {
                for (int k{j+1}; k < n; k++) {
                    d = nums[i] ^ nums[j] ^ nums[k];
                    if (find(nums.begin(), nums.end(), d) != nums.end()) {
                        cout<<"Yes";
                        return 0;
                    }
                }
            }
        }
        cout<<"No\n";
        return 0;
    }
}
