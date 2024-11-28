#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int str_length;
        string original_str;
        cin >> str_length >> original_str;
        string reversed_str = original_str;
        reverse(reversed_str.begin(), reversed_str.end());
        if (original_str <= reversed_str)
        {
            cout << original_str << endl;
        }
        else
        {
            cout << reversed_str + original_str << endl;
        }
    }
    return 0;
}
