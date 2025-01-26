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
        vector<long long> a(n);
        long long sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }
        if ((2 * sum) % n != 0)
        {
            cout << 0 << '\n';
            continue;
        }
        long long T = (2 * sum) / n;
        unordered_map<long long, long long> freq;
        long long count = 0;

        for (long long x : a)
        {
            long long complement = T - x;
            if (freq.count(complement))
            {
                count += freq[complement];
            }
            freq[x]++;
        }
        cout << count << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
