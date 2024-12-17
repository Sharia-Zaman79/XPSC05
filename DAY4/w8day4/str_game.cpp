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
        int stringLength;
        cin >> stringLength;
        string inputString;
        cin >> inputString;
        int removalCount = 0;
        string remainingCharacters = "";
        for (char currentChar : inputString)
        {
            if (!remainingCharacters.empty() && remainingCharacters.back() != currentChar)
            {
                remainingCharacters.pop_back();
                ++removalCount;
            }
            else
            {
                remainingCharacters.push_back(currentChar);
            }
        }
        if (removalCount % 2 == 1)
        {
            cout << "Zlatan" << endl;
        }
        else
        {
            cout << "Ramos" << endl;
        }
    }
    return 0;
}
