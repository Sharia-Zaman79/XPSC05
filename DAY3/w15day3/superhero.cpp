#include <bits/stdc++.h>
using namespace std;
bool is_vowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
void solve()
{
    string s, t;
    cin >> s >> t;

    if (s.size() != t.size())
    {
        cout << "No\n";
        return;
    }
    for (size_t i = 0; i < s.size(); i++)
    {
        if ((is_vowel(s[i]) && !is_vowel(t[i])) || (!is_vowel(s[i]) && is_vowel(t[i])))
        {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}

