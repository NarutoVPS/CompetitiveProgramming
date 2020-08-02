#include <bits/stdc++.h>
using namespace std;

void multiply(int *num, int no, int &upto) {
	int carry{};
	for (int i{}; i < upto; i++) {
		int product = (num[i] * no) + carry;
		num[i] = product % 10;
		carry = product/10;
	}

    while (carry) {
        num[upto] = carry % 10;
        carry = carry/10;
        upto++;
    }
}

void fact(int n) {
    int *num = new int[500];
    num[0] = 1;
    int upto{1};
	for (int i{1}; i<=n; i++) {
		multiply(num, i, upto);
	}

	for(int i{upto-1}; i>=0; i--) {
        cout<<num[i];
    }
}

int main() {
    int n;
    cin>>n;

	fact(n);
    cout<<"\n";
}
    