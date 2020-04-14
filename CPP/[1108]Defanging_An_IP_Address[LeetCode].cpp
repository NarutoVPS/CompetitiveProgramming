// #include <bits/stdc++.h>

// using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string from {"."};
        string to {"[.]"};
        int pos{};
        while((pos = address.find(from, pos)) != string::npos){
            address.replace(pos, 1, to);
            pos += to.length();
        }
        return address;
    }
};

// int main(){
//     Solution s;
//     cout<<s.defangIPaddr("192.168.1.1");
// }
