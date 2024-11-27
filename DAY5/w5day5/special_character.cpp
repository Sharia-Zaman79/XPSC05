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
        int x;
        cin >> x;
        char c = 'A';
        if (x % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < x / 2; i++)
            {
                cout << c << c;
                c++;
            }
            cout << endl;
        }
    }
    return 0;
}
