#include <bits/stdc++.h>
using namespace std;
double combination(int n, int r)
{
    if (r > n || r < 0) return 0;
    double result = 1;
    for (int i = 1; i <= r; i++)
    {
        result *= (n - i + 1) / double(i);
    }
    return result;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int target_pos = 0, current_pos = 0, cnt = 0;
    for (char c : s1)
    {
        if (c == '+') target_pos++;
        else target_pos--;
    }
    for (char c : s2)
    {
        if (c == '+') current_pos++;
        else if (c == '-') current_pos--;
        else cnt++;
    }
    int diff = target_pos - current_pos;
    if (abs(diff) > cnt || (diff + cnt) % 2 != 0)
    {
        cout << fixed << setprecision(12) << 0.0 << '\n';
        return 0;
    }
    int steps_towards_positive = (diff + cnt) / 2;
    double favorable = combination(cnt, steps_towards_positive);
    double total_outcomes = pow(2, cnt);
    double probability = favorable / total_outcomes;
    cout << fixed << setprecision(12) << probability << '\n';
    return 0;
}
