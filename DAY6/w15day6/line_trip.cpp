#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> gas_stations(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> gas_stations[i];
        }
        gas_stations.push_back(0);
        gas_stations.push_back(x);
        sort(gas_stations.begin(), gas_stations.end());
        int max_distance = 0;
        for (int i = 1; i < gas_stations.size(); ++i)
        {
            max_distance = max(max_distance, gas_stations[i] - gas_stations[i - 1]);
        }
        cout << max_distance << endl;
    }
    return 0;
}
