#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(const string &s)
{
    return s == string(s.rbegin(), s.rend());
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> strings(n);
    unordered_map<string, bool> used;
    for (int i = 0; i < n; ++i)
    {
        cin >> strings[i];
        used[strings[i]] = false;
    }
    vector<string> left, right;
    string middle = "";
    for (int i = 0; i < n; ++i)
    {
        if (used[strings[i]]) continue;
        string reversed = string(strings[i].rbegin(), strings[i].rend());
        if (strings[i] == reversed)
        {
            if (middle.empty())
            {
                middle = strings[i];
            }
        }
        else if (used.count(reversed) && !used[reversed])
        {
            left.push_back(strings[i]);
            right.push_back(reversed);
            used[reversed] = true;
        }
        used[strings[i]] = true;
    }
    string palindrome = "";
    for (const string &s : left)
    {
        palindrome += s;
    }
    palindrome += middle;
    for (auto it = right.rbegin(); it != right.rend(); ++it)
    {
        palindrome += *it;
    }
    cout << palindrome.size() << endl;
    cout << palindrome << endl;
}
