#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;

    int N{},height{};
    while(T){
        cin>>N;
        for(int i{0};i<=N;i++){
            if(i==0)
                height = 1;
            else if(i%2==0)
                height += 1;
            else
                height *= 2;  
        }
        cout<<height<<endl;
        height = 0;
        T--;
    }
}