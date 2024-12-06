#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t, numRooms, dustAmount, zeroCount, dustSum, hasDustBefore;
    cin >> t;
    while (t--)
    {
        cin >> numRooms;
        zeroCount = dustSum = hasDustBefore = 0;
        for (long long int roomIndex = 0; roomIndex < numRooms - 1; roomIndex++)
        {
            cin >> dustAmount;
            if (dustAmount > 0)
                hasDustBefore = 1;
            if (hasDustBefore && dustAmount == 0)
                zeroCount++;
            dustSum += dustAmount;
        }
        cin >> dustAmount;
        cout << dustSum + zeroCount << "\n";
    }
    return 0;
}
