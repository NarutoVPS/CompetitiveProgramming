#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int T;
    cin>>T;

    while(T--){
        int N,Q;
        cin>>N>>Q;

        string S;
        cin>>S;

        unordered_map<char, int> counts{};
        int highest{};
        for (const auto &each : S) {
            ++counts[each];
            if(counts[each] > highest)
                highest = counts[each];
        }
        while(Q--){
            int C;
            cin>>C;

            if(highest <= C){
                cout<<0<<endl;
            }
            else{
                int pending{};
                for(const auto &each: counts){
                    if(each.second > C)
                        pending += (each.second - C);
                }
                cout<<pending<<endl;
            }
        }
    }
    return 0;
}