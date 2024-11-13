#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> FirstNegativeInteger(vector<int>& a, int k)
    {
        int n = a.size(), l = 0, r = 0;
        vector<int> ans;
        queue<int> q;
        while (r < n)
        {
            if (a[r] < 0)
            {
                q.push(a[r]);
            }
            if (r - l + 1 == k)
            {
                if (!q.empty())
                {
                    ans.push_back(q.front());
                    if (a[l] == q.front())
                    {
                        q.pop();
                    }
                }
                else
                {
                    ans.push_back(0);
                }
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        return ans;
    }
};
int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--)
    {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
