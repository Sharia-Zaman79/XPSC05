#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long leaves = 0;
        if (n <= k)
        {
            leaves = (n * (n + 1)) / 2;
        }
        else
        {
            long long first = n - k + 1;
            long long last = n;
            leaves = (last * (last + 1)) / 2 - (first * (first - 1)) / 2;
        }
        if (leaves % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
