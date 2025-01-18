#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string p, h;
        cin >> p >> h;
        int n = p.size(), m = h.size();
        if (n > m)
        {
            cout << "NO\n";
            continue;
        }
        vector<int> pc(26, 0), hc(26, 0);
        for (char c : p) pc[c - 'a']++;
        bool found = false;
        for (int i = 0; i < m; i++)
        {
            hc[h[i] - 'a']++;
            if (i >= n) hc[h[i - n] - 'a']--;

            if (hc == pc)
            {
                found = true;
                break;
            }
        }
        cout << (found ? "YES\n" : "NO\n");
    }
    return 0;
}
