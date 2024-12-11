#include <bits/stdc++.h>
using namespace std;
int Distance(int a, int b)
{
    return __builtin_popcount(a ^ b);
}
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> army(m + 1);
    for (int i = 0; i <= m; i++)
    {
        cin >> army[i];
    }
    int fedorArmy = army[m];
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        if (Distance(army[i], fedorArmy) <= k)
        {
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}
