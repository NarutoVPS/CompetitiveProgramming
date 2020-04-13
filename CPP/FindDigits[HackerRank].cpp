#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    int n{},rem{},count{};
    while(t){
        cin>>n;
        int num = n;
        while(num){
            rem = num%10;
            if(rem==1)
                count++;
            else if(rem==0){
                num /= 10;
                continue;
            }
            else if(n%rem==0)
                count++;
            num /= 10;
        }
        cout<<count<<endl;
        count = 0;
        t--;
    }
}