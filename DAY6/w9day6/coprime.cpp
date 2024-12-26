#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> index(1001, -1);
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            index[x] = i + 1;
        }
        int max_sum = -1;
        for (int x = 1; x <= 1000; ++x)
        {
            if (index[x] == -1) continue;
            for (int y = x; y <= 1000; ++y)
            {
                if (index[y] == -1) continue;
                if (__gcd(x, y) == 1)
                {
                    max_sum = max(max_sum, index[x] + index[y]);
                }
            }
        }
        cout << max_sum << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
