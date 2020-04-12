#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;

    int N{},height{1};
    while(T){
        cin>>N;
        for(int i{1};i<=N;i++){
            if(i%2==0)
                height += 1;
            else
                height *= 2;  
        }
        cout<<height<<endl;
        height = 1;
        T--;
    }
}