#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (r - l >= 1)
        {
            cout << l << " " << l + 1 << "\n";
        }
        else if (l % 2 == 0 && l + l <= r)
        {
            cout << l << " " << l << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
}
int main()
{
    solve();
    return 0;
}

