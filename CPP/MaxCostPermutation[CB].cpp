#include <bits/stdc++.h>
using namespace std;

int solution(const vector<int> &num) {
    int ans{}, i{};
    for (int e : num) {
        if (1 + (e >> 31) - (-e >> 31)) {
            ans += e * i;
        }
        i++;
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    
    vector<int> num(n);
	for (int &e : num)
		cin>>e;

	cout<<solution(num);
    cout<<"\n";
}
