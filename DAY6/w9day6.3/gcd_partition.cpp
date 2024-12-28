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
        int array_size;
        cin >> array_size;

        vector<long long> arr(array_size);
        for (int i = 0; i < array_size; ++i)
        {
            cin >> arr[i];
        }
        long long total_sum = 0;
        for (int i = 0; i < array_size; i++)
        {
            total_sum += arr[i];
        }
        long long current_sum = 0;
        long long max_gcd = 1;
        for (int i = 0; i < array_size - 1; ++i)
        {
            current_sum += arr[i];
            long long remaining_sum = total_sum - current_sum;

            max_gcd = max(max_gcd, __gcd(current_sum, remaining_sum));
        }
        cout << max_gcd << "\n";
    }
}
