#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        unordered_set<int> seen;
        int suffix_len = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (seen.count(a[i]))
            {
                break;
            }
            seen.insert(a[i]);
            suffix_len++;
        }
        int moves = n - suffix_len;
        cout << moves << endl;
    }
}
