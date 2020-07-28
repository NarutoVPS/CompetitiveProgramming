#include <bits/stdc++.h>
using namespace std;

pair<int, int> solution(vector<int> nums) {
    int xor_{};
    for (int &num : nums)
        xor_ ^= num;

    int i{}, temp{xor_}, result{};
    while (temp) {
        result = temp & (1 << i);
        if (result)
            break;
        i++;
        temp = temp << 1;
    }

    int a{};
    for (const int &num : nums) {
        if (num & (1 << i))
            a ^= num;
    }

    int b = xor_ ^ a;

    return make_pair(a, b);
}

int main() {
    int n;
    cin>>n;

    vector<int> nums(n);
    for (int &num : nums)
        cin>>num;
    
    auto ans = solution(nums);
    cout << min(ans.first, ans.second) << " " << max(ans.first, ans.second) << endl;

    return 0;
}
