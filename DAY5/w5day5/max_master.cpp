#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, array_size, idx, zero_count, non_zero_count, result, max_value;
    cin >> t;
    while (t--)
    {
        cin >> array_size;
        zero_count = 0;
        non_zero_count = 0;
        vector<int> numbers(array_size);
        for (idx = 0; idx < array_size; idx++)
        {
            cin >> numbers[idx];
            if (numbers[idx] == 0)
            {
                zero_count++;
            }
            else
            {
                non_zero_count++;
            }
        }
        if (zero_count == 0)
        {
            result = 0;
        }
        else
        {
            if (non_zero_count >= zero_count - 1)
            {
                result = 0;
            }
            else
            {
                max_value = *max_element(numbers.begin(), numbers.end());
                if (max_value == 1)
                    result = 2;
                else
                    result = 1;
            }
        }
        cout << result << '\n';
    }
    return 0;
}
