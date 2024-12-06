#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int arraySize;
        cin >> arraySize;
        long long int elements[arraySize];
        for (long long int index = 0; index < arraySize; index++)
        {
            cin >> elements[index];
        }
        long long int gcdResult = 0;

        for (long long int index = 0; index < arraySize; index++)
        {
            gcdResult = __gcd(gcdResult, abs(elements[index] - index - 1));
        }
        cout << gcdResult << endl;
    }
    return 0;
}
