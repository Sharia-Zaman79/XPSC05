
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
        vector<int> weights(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> weights[i];
        }
        int max_teams = 0;
        for (int s = 2; s <= 2 * n; ++s)
        {
            unordered_map<int, int> freq;
            int teams = 0;
            for (int w : weights)
            {
                freq[w]++;
            }
            for (int w = 1; w <= s / 2; ++w)
            {
                int complement = s - w;
                if (freq[w] > 0 && freq[complement] > 0)
                {
                    if (w == complement)
                    {
                        teams += freq[w] / 2;
                    }
                    else
                    {
                        teams += min(freq[w], freq[complement]);
                    }
                    freq[w] = 0;
                    freq[complement] = 0;
                }
            }
            max_teams = max(max_teams, teams);
        }
        cout << max_teams << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
