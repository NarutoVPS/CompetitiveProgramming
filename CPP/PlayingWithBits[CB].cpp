#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;

	while (t--) {
		int a, b;
		cin>>a>>b;

		int ans{}, temp{};
		for (int i{min(a, b)}; i <= max(a, b); i++) {
			temp = i;
			while(temp) {
				ans += temp & 1;
				temp >>= 1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}