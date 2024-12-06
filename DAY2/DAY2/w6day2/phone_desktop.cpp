#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int initialDust, cleaningCapacity;
        cin >> initialDust >> cleaningCapacity;
        int operations = (cleaningCapacity + 1) / 2;
        int maxRemovedDust = (cleaningCapacity / 2) * 7 + (cleaningCapacity % 2) * 11;
        int remainingDust = max(0, initialDust - maxRemovedDust);
        operations += (remainingDust + 14) / 15;
        cout << operations << endl;
    }
    return 0;
}
