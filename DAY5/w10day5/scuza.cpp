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
        vector<int> steps(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> steps[i];
        }
        vector<int> queries(q);
        for (int i = 0; i < q; ++i)
        {
            cin >> queries[i];
        }
        sort(steps.begin(), steps.end());
        vector<long long> prefixSum(n);
        prefixSum[0] = steps[0];
        for (int i = 1; i < n; ++i)
        {
            prefixSum[i] = prefixSum[i - 1] + steps[i];
        }
        for (int i = 0; i < q; ++i)
        {
            int k = queries[i];
            auto it = upper_bound(steps.begin(), steps.end(), k);
            int idx = it - steps.begin();
            if (idx == 0)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << prefixSum[idx - 1] << " ";
            }
        }
        cout << '\n';
    }
}
