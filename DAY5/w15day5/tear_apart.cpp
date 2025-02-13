#include <bits/stdc++.h>
using namespace std;
int min_operations(string s)
{
    int n = s.size();
    int min_ops = INT_MAX;
    if (count(s.begin(), s.end(), s[0]) == n)
    {
        return 0;
    }
    for (char target = 'a'; target <= 'z'; target++)
    {
        int max_gap = 0, cur_gap = 0;
        bool found = false;
        for (char c : s)
        {
            if (c == target)
            {
                max_gap = max(max_gap, cur_gap);
                cur_gap = 0;
                found = true;
            }
            else
            {
                cur_gap++;
            }
        }
        max_gap = max(max_gap, cur_gap);

        if (found)
        {
            min_ops = min(min_ops, (int)log2(max_gap) + 1);
        }
    }
    return min_ops;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << min_operations(s) << "\n";
    }
    return 0;
}
