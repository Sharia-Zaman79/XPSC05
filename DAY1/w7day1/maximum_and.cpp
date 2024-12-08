#include <bits/stdc++.h>
using namespace std;
const int B = 30;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long K;
        cin >> n >> K;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> bits(B + 1, 0);
        for (int i = 0; i < n; i++)
        {
            for (int k = 0; k <= B; k++)
            {
                if ((a[i] >> k) & 1)
                {
                    bits[k]++;
                }
            }
        }
        long long ans = 0;
        for (int k = B; k >= 0; k--)
        {
            int need = n - bits[k];
            if (K >= need)
            {
                ans += (1LL << k);
                K -= need;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
