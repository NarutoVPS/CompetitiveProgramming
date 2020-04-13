#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,t;
    int k;

    cin>>s>>t>>k;

    int i{};
    while(s[i]==t[i]){
        i++;
    }
    int requiredOperations = (s.size()-i + t.size()-i);
    if(requiredOperations<0)
        requiredOperations = 0;
    if(k==requiredOperations)
        cout<<"Yes"<<endl;
    else if(k>requiredOperations){
        if((k-s.size())>=t.size())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    else
        cout<<"No"<<endl;
    return 0;
}