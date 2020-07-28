/*
    For a given string, print all the possible subsets (the power set).

    Note: The solution set must not contain duplicate subsets.
*/

#include <bits/stdc++.h>
using namespace std;

void solution(string str) {
    int l = str.size();

    for (int i{}; i <= ((1 << l) - 1); i++) {
        int temp = i, j{};
        while(temp) {
            if (temp & 1)
                cout<<str[j];
            j++;
            temp = temp >> 1;
        }
        if (i)
            cout<<endl;
    }
}

int main() {
    string str;
    cin>>str;

    solution(str);
    
    return 0;
}
