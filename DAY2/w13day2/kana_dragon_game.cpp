#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        while (n > 0 && x > 20)
        {
            x = x / 2 + 10;
            n--;
        }
        x -= m * 10;
        if (x <= 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
