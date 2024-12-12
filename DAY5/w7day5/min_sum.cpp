#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int or_sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            or_sum |= a[i];
        }
        cout << or_sum << endl;
    }
    return 0;
}
