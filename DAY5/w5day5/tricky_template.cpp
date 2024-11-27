#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int str_len;
        cin >> str_len;
        string str1, str2, str3;
        cin >> str1 >> str2 >> str3;
        bool mismatch = false;

        for (int idx = 0; idx < str_len; idx++)
        {
            if ((str1[idx] != str3[idx]) && (str2[idx] != str3[idx]))
            {
                mismatch = true;
                break;
            }
        }
        if (mismatch == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
