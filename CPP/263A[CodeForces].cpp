#include <bits/stdc++.h>

#define fo(i,n) for(int i{};i<n;i++)

using namespace std;

int main(){
    int a,b,current;
    fo(i,5){
        fo(j,5){
            cin>>current;
            if(current){
                a = i+1;
                b = j+1;
            }
        }
    }
    cout<<abs(a-3)+abs(b-3)<<endl;
    
    return 0;
}