#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int medianIdx = n / 2;
    long long low = a[medianIdx], high = 1e9 + k, best = a[medianIdx];
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        long long ops = 0;
        for (int i = medianIdx; i < n; i++)
        {
            if (a[i] < mid)
            {
                ops += (mid - a[i]);
            }
        }
        if (ops <= k)
        {
            best = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << best << endl;
}

