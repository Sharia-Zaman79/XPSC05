#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        c[i] -= b;
    }
    sort(c.begin(), c.end());
    long long result = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i] > 0)
        {
            result += (n - 1 - i);
        }
        else
        {
            int j = upper_bound(c.begin() + i + 1, c.end(), -c[i]) - c.begin();
            result += (n - j);
        }
    }
    cout << result << endl;
}
