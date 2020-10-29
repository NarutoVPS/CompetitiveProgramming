#include <bits/stdc++.h>
using namespace std;

bool comp (pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    int T;
    cin>>T;

    int N, s, e;
    vector<pair<int, int>> activity;

    while (T--) {
        cin>>N;

        for (int i{}; i < N; i++) {
            cin>>s>>e;
            activity.push_back(make_pair(s, e));
        }

        sort(activity.begin(), activity.end(), comp);

        int ans = 1;
        int prev = activity[0].second;

        for (int i {1}; i < N; i++) {
            if (activity[i].first >= prev) {
                ans++;
                prev = activity[i].second;
            }
        }
        cout<<ans<<endl;
        activity.clear(); 
    }

    return 0;
}
