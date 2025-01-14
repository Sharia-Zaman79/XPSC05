#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> prime(n + 1, 0);
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i; j <= n; j += i)
            {
                prime[j]++;
            }
        }
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (prime[i] == 2)
        {
            count++;
        }
    }
    cout << count << endl;
}

