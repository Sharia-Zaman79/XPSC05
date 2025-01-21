#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int j = 0;
        for (int i = 0; i < m && j < n; ++i)
        {
            if (b[i] == a[j])
            {
                ++j;
            }
        }

        cout << j << endl;
    }
    return 0;
}
