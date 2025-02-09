#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    unordered_map<int, long long> freq;
    long long countPairs = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int key = a - i;

        countPairs += freq[key];
        freq[key]++;
    }
    cout << countPairs << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

