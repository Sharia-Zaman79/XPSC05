#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long t;
    cin >> n >> t;
    vector<long long> m(n);
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    long long l = 1, r = *max_element(m.begin(), m.end()) * t, res = r;
    while (l <= r)
    {
        long long mid = l + (r - l) / 2;
        long long prod = 0;

        for (long long x : m)
        {
            prod += mid / x;
            if (prod >= t) break;
        }
        if (prod >= t)
        {
            res = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << res << endl;
}
