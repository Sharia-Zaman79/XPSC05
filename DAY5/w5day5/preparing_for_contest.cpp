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
        int arr_size, split_idx;
        cin >> arr_size >> split_idx;
        int sequence[arr_size];
        for (int idx = 0; idx < arr_size; idx++)
        {
            sequence[idx] = idx + 1;
        }
        sort(sequence, sequence + split_idx);
        sort(sequence + split_idx, sequence + arr_size, greater<int>());
        for (int idx = 0; idx < arr_size; idx++)
        {
            cout << sequence[idx] << " ";
        }
        cout << endl;
    }
    return 0;
}
