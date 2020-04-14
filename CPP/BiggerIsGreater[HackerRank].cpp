#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;

    while(T){
        string word;
        cin>>word;

        if(next_permutation(word.begin(), word.end()))
            cout<<word<<endl;
        else
            cout<<"no answer"<<endl;
        
        T--;
    }
    return 0;
}