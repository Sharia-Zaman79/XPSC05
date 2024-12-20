#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int query_count;
        cin >> query_count;
        vector<int> sequence;
        string result = "";
        bool increasing_phase = true;
        while (query_count--)
        {
            int current_value;
            cin >> current_value;
            if (increasing_phase)
            {
                if (sequence.empty() || current_value >= sequence.back())
                {
                    sequence.push_back(current_value);
                    result += '1';
                }
                else
                {
                    if (current_value <= sequence.front())
                    {
                        sequence.push_back(current_value);
                        result += '1';
                        increasing_phase = false;
                    }
                    else
                    {
                        result += '0';
                    }
                }
            }
            else
            {
                if (current_value >= sequence.back() && current_value <= sequence.front())
                {
                    sequence.push_back(current_value);
                    result += '1';
                }
                else
                {
                    result += '0';
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}
