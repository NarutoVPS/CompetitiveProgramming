#include <bits/stdc++.h>

using namespace std;

int reverse(int num){
    int rem{},rev{};
    while(num){
        rem = num%10;
        rev = rev*10 + rem;
        num /= 10;
    }
    return rev;
}

int main(){
    int i,j,k;
    cin>>i>>j>>k;

    int count{};
    for(;i<=j;i++){
        if((i-reverse(i)) % k == 0)
            count++;
    }
    cout<<count<<endl;
}