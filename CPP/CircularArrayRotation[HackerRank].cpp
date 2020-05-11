#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,q;
    cin>>n>>k>>q;

    list<int> arr;
    int temp;
    for(int i{};i<n;i++){
        cin>>temp;
        arr.insert(arr.end(), temp);
    }

    vector<int> query;
    for(int i{};i<q;i++){
        cin>>temp;
        query.push_back(temp);
    }

    for(int i{};i<k;i++){
        arr.push_front(arr.back());
        arr.pop_back();
    }

    for(auto each:query){
        auto it = arr.cbegin();
        advance(it, each);
        cout<<*it<<endl;
    }

    return 0;
}


/*
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int n=a.size();
    vector<int> c;
    k=k%n;
    reverse(a.begin(),a.begin()+n-k);
    reverse(a.begin()+n-k,a.begin()+n);
    reverse(a.begin(),a.end());
    for(int i=0;i<queries.size();i++)
    {
        c.push_back(a[queries[i]]);
    }
    return c;
}
int main()
{
    int ne,k,nq;
    cin>>ne>>k>>nq;
    vector<int> a(ne),queries(nq);
    for(int i=0;i<ne;i++)
        cin>>a[i];
    for(int i=0;i<nq;i++)
        cin>>queries[i];
    vector<int> ans=circularArrayRotation(a,k,queries);
    for(auto i: ans)
        cout<<i<<endl;
    return 0;
}
*/
