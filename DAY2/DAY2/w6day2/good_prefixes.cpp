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
        vector<long long int> elements(arraySize);
        for (long long int index = 0; index < arraySize; index++)
        {
            cin >> elements[index];
        }
        long long int currentMax = LLONG_MIN;
        long long int prefixSum = 0;
        long long int goodPrefixCount = 0;

        for (long long int index = 0; index < arraySize; index++)
        {
            prefixSum += elements[index];
            currentMax = max(currentMax, elements[index]);

            if (prefixSum - currentMax == currentMax)
            {
                goodPrefixCount++;
            }
        }
        cout << goodPrefixCount << endl;
    }
    return 0;
}
