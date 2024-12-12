#include <bits/stdc++.h>
using namespace std;
int msb(int num)
{
    int pos = 0;
    while (num > 0)
    {
        pos++;
        num >>= 1;
    }
    return pos;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> msb_count;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int bit = msb(a[i]);
            msb_count[bit]++;
        }
        long long result = 0;
        for (const auto& [bit, count] : msb_count)
        {
            if (count > 1)
            {
                result += 1LL * count * (count - 1) / 2;
            }
        }
        cout << result << endl;
    }
    return 0;
}
