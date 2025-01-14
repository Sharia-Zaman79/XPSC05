#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const int L = 1000000;
    vector<bool> p(L + 1, true);
    p[0] = p[1] = false;
    for (int i = 2; i * i <= L; i++)
    {
        if (p[i])
        {
            for (int j = i * i; j <= L; j += i)
            {
                p[j] = false;
            }
        }
    }
    int n;
    cin >> n;
    while (n--)
    {
        long long x;
        cin >> x;
        long long r = sqrt(x);
        if (r * r == x && p[r])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
