#include <bits/stdc++.h>

#define fo(i, n) for (int i{}; i < n; i++)
#define fo2(i, n) for (int i{1}; i <= n; i++)
#define fo3(n, m) for (int i{n}; i < m; i++)
#define fo4(x) for (auto each : x)

#define all(x) x.begin(), x.end()
#define sort(x) sort(all(x))
#define sort2(x) sort(x.begin(), x.end(), greater<int>())

#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
#define ll long long

#define p(x)            \
    for (auto each : x) \
        cout << each << endl;
#define p2(x)           \
    for (auto each : x) \
        cout << each << " ";

using namespace std;

ll gcd(ll A, ll B)
{
    ll temp{A};
    while (B)
    {
        A = B;
        B = temp % B;
        temp = A;
    }
    return A;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        ll A, B;
        cin >> A >> B;

        ll gcd_ = gcd(A, B);
        cout << gcd_ << " " << (A * B) / gcd_ << endl;
    }
    return 0;
}