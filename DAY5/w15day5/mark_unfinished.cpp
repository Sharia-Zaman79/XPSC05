#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;
    vector<pair<int, int>> operations(c);
    vector<int> lengths(c + 1);
    lengths[0] = n;
    for (int i = 0; i < c; i++)
    {
        int l, r;
        cin >> l >> r;
        operations[i] = {l, r};
        lengths[i + 1] = lengths[i] + (r - l + 1);
    }
    while (q--)
    {
        int k;
        cin >> k;
        for (int i = c - 1; i >= 0; i--)
        {
            int l = operations[i].first, r = operations[i].second;
            int prev_length = lengths[i];

            if (k > prev_length)
            {
                k = l + (k - prev_length) - 1;
            }
        }
        cout << s[k - 1] << "\n";
    }
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
