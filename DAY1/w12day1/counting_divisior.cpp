#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> nums(n);
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        if (nums[i] > mx) mx = nums[i];
    }
    vector<int> divCnt(mx + 1, 0);
    for (int i = 1; i <= mx; i++)
    {
        for (int j = i; j <= mx; j += i)
        {
            divCnt[j]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << divCnt[nums[i]] << "\n";
    }
}
