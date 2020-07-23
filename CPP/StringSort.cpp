/*
    Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.

    Input Format :
        N(integer) followed by N strings.

    Constraints :
        N<=1000

    Output Format :
        N lines each containing one string.

    Sample Input :
        3
        bat
        apple
        batman

    Sample Output :
        apple
        batman
        bat
*/

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