#include <bits/stdc++.h>
using namespace std;
const int MAX_TEMP = 200000;
int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> diff(MAX_TEMP + 2, 0);
    for (int i = 0; i < n; ++i)
    {
        int l, r;
        cin >> l >> r;
        diff[l] += 1;
        diff[r + 1] -= 1;
    }
    vector<int> recommendations(MAX_TEMP + 1, 0);
    for (int i = 1; i <= MAX_TEMP; ++i)
    {
        recommendations[i] = recommendations[i - 1] + diff[i];
    }
    vector<int> admissible(MAX_TEMP + 1, 0);
    for (int i = 1; i <= MAX_TEMP; ++i)
    {
        if (recommendations[i] >= k)
        {
            admissible[i] = 1;
        }
    }
    vector<int> prefix_sum(MAX_TEMP + 1, 0);
    for (int i = 1; i <= MAX_TEMP; ++i)
    {
        prefix_sum[i] = prefix_sum[i - 1] + admissible[i];
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << prefix_sum[b] - prefix_sum[a - 1] << endl;
    }
    return 0;
}
