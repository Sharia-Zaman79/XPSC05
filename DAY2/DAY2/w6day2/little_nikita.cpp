#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int numA, numB;
        int difference;
        cin >> numA >> numB;
        difference = numA - numB;
        bool isValid = true;
        if (numA == numB)
        {
            isValid = false;
        }
        else if (numA > numB)
        {
            for (int left = numA - 1, right = 1; left > right; left--, right++)
            {
                if (left - right == numB)
                {
                    isValid = false;
                    break;
                }
            }
        }
        if (isValid)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}
