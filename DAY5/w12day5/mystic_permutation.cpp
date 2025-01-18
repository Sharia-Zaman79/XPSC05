#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n), q(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            q[i] = i + 1;
        }
        if (n == 1)
        {
            cout << "-1\n";
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (p[i] == q[i])
            {
                if (i == n - 1)
                {
                    swap(q[i], q[i - 1]);
                }
                else
                {
                    swap(q[i], q[i + 1]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << q[i] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
