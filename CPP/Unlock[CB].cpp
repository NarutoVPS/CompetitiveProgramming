#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &num, int k, int n) {
    if (k >= n) {
        sort(num.begin(), num.end(), greater<int>());
        return num;
    }

    int j{};
    while (k) {
        int i = max_element(num.begin() + j, num.end()) - num.begin();
        if (i != j) {
            swap(num[i], num[j]);
            k--;
        }
        j++;
    }
    return num;
}

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> num(n);

    for (int &e : num)
        cin>>e;

    solve(num, k, n);
    for (int &e : num)
        cout<<e<<" "; 
    return 0;
}