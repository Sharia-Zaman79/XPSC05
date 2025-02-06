#include <bits/stdc++.h>
using namespace std;
class FenwickTree
{
public:
    vector<int> bit;
    int n;
    FenwickTree(int size)
    {
        n = size;
        bit.assign(n + 1, 0);
    }
    void update(int idx, int delta)
    {
        while (idx <= n)
        {
            bit[idx] += delta;
            idx += idx & -idx;
        }
    }
    int query(int idx)
    {
        int sum = 0;
        while (idx > 0)
        {
            sum += bit[idx];
            idx -= idx & -idx;
        }
        return sum;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> a(n), compressed(n);
    vector<pair<int, int>> temp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        temp[i] = {a[i], i};
    }
    sort(temp.begin(), temp.end());
    for (int i = 0; i < n; i++)
        compressed[temp[i].second] = i + 1;
    FenwickTree leftBIT(n), rightBIT(n);
    vector<int> rightSmaller(n, 0), leftGreater(n, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        rightSmaller[i] = rightBIT.query(compressed[i] - 1);
        rightBIT.update(compressed[i], 1);
    }

    long long result = 0;
    for (int i = 0; i < n; i++)
    {
        leftGreater[i] = i - leftBIT.query(compressed[i]);
        result += (long long) leftGreater[i] * rightSmaller[i];
        leftBIT.update(compressed[i], 1);
    }
    cout << result << endl;
}

