#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    long long x = *max_element(a.begin(), a.end());
    vector<long long> differences;
    for (int i = 0; i < n; ++i)
    {
        differences.push_back(x - a[i]);
    }
    long long z = differences[0];
    for (int i = 1; i < n; ++i)
    {
        z = gcd(z, differences[i]);
    }
    long long y = 0;
    for (int i = 0; i < n; ++i)
    {
        y += (x - a[i]) / z;
    }
    cout << y << " " << z << "\n";
}
int main()
{
    solve();
    return 0;
}
