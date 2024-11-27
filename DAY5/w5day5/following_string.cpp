#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t, sz, p, q;
    cin >> t;
    while (t--)
    {
        cin >> sz;
        vector<long long int> arr(sz);

        for (p = 0; p < sz; p++)
        {
            cin >> arr[p];
        }
        vector<long long int> freq(26, 0);
        string res = "";
        for (p = 0; p < sz; p++)
        {
            for (q = 0; q < 26; q++)
            {
                if (freq[q] == arr[p])
                {
                    freq[q]++;
                    res += (char)('a' + q);
                    break;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
