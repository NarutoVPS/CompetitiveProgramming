#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;

    while(T){
        long long N;
        cin>>N;

        long long price{};
        set<pair<int, int>> data;
        for(long long i{};i<N;i++){
            cin>>price;
            data.insert(make_pair(price, i));
        }

        long long total{0},i{};
        for(auto each{data.rbegin()}; each!=data.rend(); each++){
            if(((*each).first) - i > 0)
                total += (((*each).first) - i);
            i++;
        } 
        cout<<total%1000000007<<endl;
        T--;
    }
    return 0;
}
