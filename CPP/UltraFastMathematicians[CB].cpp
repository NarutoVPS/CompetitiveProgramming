#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        string n1,n2;
        cin>>n1>>n2;

        for (int i{}; i < n1.size(); i++) {
            if (n1[i] != n2[i])
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<endl;
    }
    
    return 0;
}