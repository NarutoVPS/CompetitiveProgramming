#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t){
        long long b,w,bc,wc,z;
        cin>>b>>w>>bc>>wc>>z;

        long long totalCost{};
        if((z < abs(bc-wc))){
            if(bc+z < wc+z)
                totalCost = bc*(b+w) + w*z;
            else    
                totalCost = wc*(w+b) + b*z;
        }
        else
            totalCost = bc*b + wc*w;

        cout<<totalCost<<endl;
        t--;
    }
}