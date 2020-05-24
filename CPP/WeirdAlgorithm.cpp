#include<bits/stdc++.h>
using namespace std;

int main(){
	// #ifndef NARUTO
	// freopen ("../input.txt", "r", stdin);
	// freopen ("../output.txt", "w", stdout);
	// #endif

	long long n;
	cin>>n;

	cout<<n<<" ";
	while(n != 1){
		if (n%2 == 0)
			n /= 2;
		else
			n = (n*3) + 1;

		cout<<n<<" ";
	}

	return 0;
}