#include <bits/stdc++.h>

#define fo(i,n) for(int i{};i<n;i++)
#define fo2(i,n) for(int i{1};i<=n;i++)
#define fo3(n,m) for(int i{n};i<m;i++)
#define fo4(x) for(auto each:x)

#define all(x) x.begin(),x.end()
#define sort(x) sort(all(x))
#define sort2(x) sort(x.begin(),x.end(), greater<int>())

#define vi vector<int>
#define vll vector<long long>
#define mp make_pair

#define p(x) for(auto each:x) cout<<each<<endl;
#define p2(x ) for(auto each:x) cout<<each<<" ";

using namespace std;

int bubbleSort(vi &arr){
    int swaps{};

    fo(i, arr.size()){
        fo(j, arr.size()-1){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaps++;
            }
        }
    }

    return swaps;
}

void swap(int &a, int &b){
    int temp{a};
    a = b;
    b = temp;
}

int main(){
    int n;
    cin>>n;

    vi arr(n);
    for(auto &each: arr)
        cin>>each;

    cout<<"Array is sorted in "<<bubbleSort(arr)<<" swaps."<<endl;
    cout<<"First Element: "<<arr[0]<<endl;
    cout<<"Last Element: "<<arr[n-1]<<endl;
    return 0;
}