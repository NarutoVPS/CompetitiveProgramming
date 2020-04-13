#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin>>q;

    int a,b;
    while(q){
        cin>>a>>b;
        int initial = sqrt(a);  
        if(initial<sqrt(a)) //since initial takes the floor value
            initial += 1;
        int count{};
        while(initial*initial <= b){
            count++;
            initial++;
        }
        cout<<count<<endl;
        q--;
    }
}