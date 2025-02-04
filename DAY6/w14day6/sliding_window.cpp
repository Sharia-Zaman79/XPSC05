#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    multiset<int> left, right;
    auto balance = [&]()
    {
        while (left.size() > right.size() + 1)
        {
            right.insert(*left.rbegin());
            left.erase(prev(left.end()));
        }
        while (right.size() > left.size())
        {
            left.insert(*right.begin());
            right.erase(right.begin());
        }
    };
    for (int i = 0; i < k; i++)
    {
        left.insert(arr[i]);
    }
    balance();
    vector<int> medians;
    medians.push_back(*left.rbegin());

    for (int i = k; i < n; i++)
    {
        if (left.count(arr[i - k]))
        {
            left.erase(left.find(arr[i - k]));
        }
        else
        {
            right.erase(right.find(arr[i - k]));
        }
        if (!left.empty() && arr[i] <= *left.rbegin())
        {
            left.insert(arr[i]);
        }
        else
        {
            right.insert(arr[i]);
        }
        balance();
        medians.push_back(*left.rbegin());
    }

    for (int median : medians)
    {
        cout << median << " ";
    }
    cout << "\n";
}
