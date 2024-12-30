#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long x;
    cin >> n >> x;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<long long, int> prefixCount;
    long long prefixSum = 0;
    int subarrayCount = 0;
    prefixCount[0] = 1;
    for (int i = 0; i < n; i++)
    {
        prefixSum += arr[i];
        if (prefixCount.find(prefixSum - x) != prefixCount.end())
        {
            subarrayCount += prefixCount[prefixSum - x];
        }
        prefixCount[prefixSum]++;
    }
    cout << subarrayCount << endl;
    return 0;
}
