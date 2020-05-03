#include <bits/stdc++.h>

#define fo(i,n) for(long i{};i<n;i++)
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

int main(){
    long T;
    cin>>T;

    while(T--){
        long N,Q;
        cin>>N>>Q;

        string S;
        cin>>S;

        while(Q--){
            string str {S};
            long C;
            cin>>C;

            if((long)str.length() <= C){
                cout<<0<<endl;
                continue;
            }
            else{
                unordered_set<char> original;
                string left{};
                fo(i, C){
                    fo4(str){
                        if(original.find(each) != original.end())
                            left += each;
                        else
                        {
                                original.insert(each);
                        }
                    }

                    str = left;
                    original.clear();
                    left = "";
                }
                cout<<str.length()<<endl;
            }
        }
    }
    return 0;
}