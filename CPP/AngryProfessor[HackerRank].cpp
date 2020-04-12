#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n,k,temp;
    cin>>t;

    while(t){
        cin>>n>>k;
        int onTime{};
        for(int i{};i<n;i++){
            cin>>temp;
            if(temp<=0)
                onTime++;
        }

        if(onTime>=k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

        t--;
    }
    return 0;
}