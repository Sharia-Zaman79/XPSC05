#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> candies(n);
        for (int i = 0; i < n; i++)
        {
            cin >> candies[i];
        }
        sort(candies.rbegin(), candies.rend());
        vector<long long> prefixSum(n);
        prefixSum[0] = candies[0];
        for (int i = 1; i < n; i++)
        {
            prefixSum[i] = prefixSum[i - 1] + candies[i];
        }
        while (q--)
        {
            long long x;
            cin >> x;
            auto it = lower_bound(prefixSum.begin(), prefixSum.end(), x);
            if (it == prefixSum.end())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << (it - prefixSum.begin() + 1) << '\n';
            }
        }
    }
}
