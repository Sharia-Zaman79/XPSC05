#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        if (y == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            cout << x << " " << x * y << " " << x * (y + 1) << "\n";
        }
    }
}
