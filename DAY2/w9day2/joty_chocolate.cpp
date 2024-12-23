#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a, long long b)
{
    return __gcd(a, b);
}
long long LCM(long long a, long long b)
{
    return (a / GCD(a, b)) * b;
}
int main()
{
    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    long long red_tiles = n / a;
    long long blue_tiles = n / b;
    long long overlap_tiles = n / LCM(a, b);
    long long chocolates = (red_tiles * p) + (blue_tiles * q) - (overlap_tiles * min(p, q));
    cout << chocolates << endl;
    return 0;
}
