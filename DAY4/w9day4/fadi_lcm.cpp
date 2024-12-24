#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    long long X;
    cin >> X;
    long long a = 1, b = X;
    for (long long i = 1; i * i <= X; ++i)
    {
        if (X % i == 0)
        {
            long long j = X / i;
            if (max(i, j) < max(a, b))
            {
                a = i;
                b = j;
            }
        }
    }
    cout << a << " " << b << endl;
    return 0;
}

