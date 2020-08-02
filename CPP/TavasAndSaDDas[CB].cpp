#include <bits/stdc++.h>
using namespace std;

int solution(string num) {
    int n = num.size();
    int ans = (1 << n) - 2;

    for (int i{n-1}, pos = {}; i>=0; i--, pos++) {
        if (num[i] == '7')
            ans += (1 << pos);
    }

    return ans + 1;
}

int main() {
    string num;
    cin>>num;
    
    cout<<solution(num)<<endl;
    return 0;
}