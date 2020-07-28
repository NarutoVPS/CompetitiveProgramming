/*
    We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once. Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )

    Input Format
        First line contains the number n. Second line contains n space separated number.

    Constraints
        n < 10^5

    Output Format
        Output a single line containing the unique numbers separated by space

    Sample Input
        4
        3 1 2 1

    Sample Output
        2 3

    Explanation
        Smaller number comes before larger number
*/

#include <bits/stdc++.h>
using namespace std;

// O(n) Time | O(1) Space
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
