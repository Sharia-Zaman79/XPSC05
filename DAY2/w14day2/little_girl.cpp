#include <bits/stdc++.h>
using namespace std;
long long maximum_query_sum(int n, int q, vector<int>& arr, vector<pair<int, int>>& queries)
{
    vector<int> freq(n + 1, 0);
    for (auto& query : queries)
    {
        int l = query.first, r = query.second;
        freq[l - 1] += 1;
        if (r < n)
        {
            freq[r] -= 1;
        }
    }
    for (int i = 1; i < n; ++i)
    {
        freq[i] += freq[i - 1];
    }
    freq.resize(n);
    sort(freq.rbegin(), freq.rend());
    sort(arr.rbegin(), arr.rend());
    long long max_sum = 0;
    for (int i = 0; i < n; ++i)
    {
        max_sum += (long long)freq[i] * arr[i];
    }
    return max_sum;
}
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    vector<pair<int, int>> queries(q);
    for (int i = 0; i < q; ++i)
    {
        cin >> queries[i].first >> queries[i].second;
    }
    cout << maximum_query_sum(n, q, arr, queries) << endl;

    return 0;
}
