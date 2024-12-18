#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        string reversed_s = s;
        reverse(reversed_s.begin(), reversed_s.end());
        if (s == reversed_s)
        {
            cout << 0 << endl;
            continue;
        }
        int minDeletions = INT_MAX;
        bool possible = false;
        for (char skip = 'a'; skip <= 'z'; ++skip)
        {
            int l = 0, r = n - 1;
            int deletions = 0;
            bool isValid = true;
            while (l < r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else if (s[l] == skip)
                {
                    l++;
                    deletions++;
                }
                else if (s[r] == skip)
                {
                    r--;
                    deletions++;
                }
                else
                {
                    isValid = false;
                    break;
                }
            }
            if (isValid)
            {
                possible = true;
                minDeletions = min(minDeletions, deletions);
            }
        }
        if (possible)
        {
            cout << minDeletions << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
