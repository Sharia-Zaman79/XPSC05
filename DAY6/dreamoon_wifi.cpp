#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    int total = 0, current = 0, unknowns = 0;
    for (char ch : s1) total += (ch == '+') ? 1 : -1;
    for (char ch : s2)
    {
        if (ch == '+') current++;
        else if (ch == '-') current--;
        else unknowns++;
    }
    int diff = total - current;
    if (abs(diff) > unknowns || (diff + unknowns) % 2 != 0)
    {
        cout << "0.000000000000" << endl;
        return 0;
    }
    int half = (diff + unknowns) / 2;
    long long factorial = 1;
    for (int i = 0; i < half; i++)
    {
        factorial *= (unknowns - i);
        factorial /= (i + 1);
    }
    long long totalWays = 1LL << unknowns;
    printf("%.12f\n", (double)factorial / totalWays);

    return 0;
}
