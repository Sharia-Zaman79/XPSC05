#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        long long m;
        cin >> m;
        long long res = 0;
        long long b[m];
        for (long long i = 0; i < m; i++)
        {
            cin >> b[i];
            res ^= b[i];
        }

        if (m % 2 == 0)
        {
            if (res == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << res << endl;
        }
    }
    return 0;
}
