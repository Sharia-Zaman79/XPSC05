#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        unordered_map<int, int> b_cnt, win_cnt;
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < m; ++i)
        {
            cin >> b[i];
            b_cnt[b[i]]++;
        }
        for (int i = 0; i < m; ++i) win_cnt[a[i]]++;
        int matches = 0, res = 0;
        for (const auto& p : b_cnt)
        {
            if (win_cnt.count(p.first))
            {
                matches += min(p.second, win_cnt[p.first]);
            }
        }
        if (matches >= k) res++;
        for (int i = m; i < n; ++i)
        {
            int add = a[i], rem = a[i - m];
            win_cnt[add]++;
            if (b_cnt.count(add) && win_cnt[add] <= b_cnt[add]) matches++;
            if (b_cnt.count(rem) && win_cnt[rem] <= b_cnt[rem]) matches--;
            win_cnt[rem]--;
            if (win_cnt[rem] == 0) win_cnt.erase(rem);
            if (matches >= k) res++;
        }
        cout << res << endl;
    }
}
