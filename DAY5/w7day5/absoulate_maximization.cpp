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
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int bitwise_or = 0, bitwise_and = a[0];
        for (int i = 0; i < n; ++i)
        {
            bitwise_or |= a[i];
            bitwise_and &= a[i];
        }
        cout << bitwise_or - bitwise_and << endl;
    }
    return 0;
}
