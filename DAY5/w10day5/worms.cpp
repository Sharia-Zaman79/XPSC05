#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> prefix(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        prefix[i] = (i == 0 ? a : prefix[i - 1] + a);
    }
    int m;
    cin >> m;
    while (m--)
    {
        int q;
        cin >> q;
        int pile = lower_bound(prefix.begin(), prefix.end(), q) - prefix.begin() + 1;
        cout << pile << '\n';
    }
}

