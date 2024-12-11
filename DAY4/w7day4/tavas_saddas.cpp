#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int len = n.size();
    int index = 0;
    for (int i = 1; i < len; i++)
    {
        index += (1 << i);
    }
    for (int i = 0; i < len; i++)
    {
        if (n[i] == '7')
        {
            index += (1 << (len - i - 1));
        }
    }
    cout << index + 1 << '\n';
    return 0;
}
