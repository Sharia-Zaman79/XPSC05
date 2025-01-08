#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long low = 1, high = *max_element(a.begin(), a.end()) + x;
        long long bestH = 1;
        while (low <= high)
        {
            long long mid = (low + high) / 2;
            long long waterUsed = 0;
            for (int i = 0; i < n; ++i)
            {
                if (mid > a[i])
                {
                    waterUsed += (mid - a[i]);
                    if (waterUsed > x) break;
                }
            }
            if (waterUsed <= x)
            {
                bestH = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << bestH << endl;
    }
}
