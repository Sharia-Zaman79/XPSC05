#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, array_size, left_ptr, right_ptr, pairs_count, idx;
    cin >> t;
    while (t--)
    {
        cin >> array_size;
        pairs_count = array_size / 2 + array_size % 2;
        left_ptr = 1;
        right_ptr = 3 * array_size;
        cout << pairs_count << endl;
        for (idx = 0; idx < pairs_count; idx++)
        {
            cout << left_ptr << " " << right_ptr << '\n';
            left_ptr += 3;
            right_ptr -= 3;
        }
    }
    return 0;
}
