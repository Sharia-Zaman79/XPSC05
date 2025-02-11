#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k;
    cin >> n >> k;
    long long eaten = 0, put = 1;
    while (n--)
    {
        if (k < put)
        {
            eaten++;
            k++;
        }
        else
        {
            k -= put;
            put++;
        }
    }
    cout << eaten << "\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
