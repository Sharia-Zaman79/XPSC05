#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int left, right;
        cin >> left >> right;
        if (left <= 3 && right <= 3)
        {
            cout << -1 << endl;
            continue;
        }
        if (right - left >= 1)
        {
            if (right % 2 != 0)
            {
                right--;
            }
            cout << right / 2 << " " << right / 2 << endl;
            continue;
        }
        int divisor = left;
        for (int i = 2; i * i <= left; ++i)
        {
            if (left % i == 0)
            {
                divisor = i;
                break;
            }
        }
        if (divisor == left)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << divisor << " " << left - divisor << endl;
        }
    }
}
