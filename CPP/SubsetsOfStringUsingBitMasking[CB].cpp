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
