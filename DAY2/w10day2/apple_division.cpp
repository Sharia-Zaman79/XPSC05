#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> weights(n);
    long long totalWeight = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
        totalWeight += weights[i];
    }
    long long Difference = LLONG_MAX;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        long long group1Weight = 0;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                group1Weight += weights[i];
            }
        }
        long long group2Weight = totalWeight - group1Weight;
        long long currentDifference = abs(group1Weight - group2Weight);
        Difference = min(Difference, currentDifference);
    }
    cout << Difference << endl;
    return 0;
}

