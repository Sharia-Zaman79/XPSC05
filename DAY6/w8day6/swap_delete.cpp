#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string binary_string;
        cin >> binary_string;

        int length = binary_string.size();
        int count_ones = count(binary_string.begin(), binary_string.end(), '1');
        int count_zeros = length - count_ones;
        int index;
        for (index = 0; index < length; index++)
        {
            if (binary_string[index] == '0')
            {
                if (count_ones > 0)
                {
                    count_ones--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (count_zeros > 0)
                {
                    count_zeros--;
                }
                else
                {
                    break;
                }
            }
        }
        cout << length - index << '\n';
    }
}
