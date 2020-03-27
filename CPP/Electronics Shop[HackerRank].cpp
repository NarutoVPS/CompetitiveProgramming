#include <bits/stdc++.h>

using namespace std;

int main(){
    int money, n_key, n_drives,temp;
    vector<int> keyboard, drives;

    cin>>money>>n_key>>n_drives;
    for(int i{};i<n_key;i++){
        cin>>temp;
        keyboard.push_back(temp);
    }
    for(int i{};i<n_drives;i++){
        cin>>temp;
        drives.push_back(temp);
    }
    if(((*min_element(keyboard.begin(), keyboard.end())) + (*min_element(drives.begin(), drives.end()))) > money)
        cout<<-1<<endl;
    else{
        int ans{0};
        for(int i : keyboard){
            for(int j : drives){
                if((i+j)>ans && ((i+j)<=money))
                    ans = i+j;
            }
        }
        cout<<ans<<endl;
    }
}
