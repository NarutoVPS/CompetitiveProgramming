#include <bits/stdc++.h>
using namespace std;

bool comp(string &s1, string &s2) {
    if (!(s1.find(s2) == string::npos))
        return true;
    return s1 < s2;
}

int main()
{
    int n;
    cin>>n;

    vector<string> words(n);

    for (auto &every: words)
        cin>>every;
    sort(words.begin(), words.end(), comp);
    for(auto every:words)
        cout<<every<<endl;

    return 0;
}