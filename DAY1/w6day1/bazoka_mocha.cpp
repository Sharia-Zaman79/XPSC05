#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int size;
        cin >> size;
        vector<long long int> array(size);

        for (long long int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        bool isAlreadySorted = true;
        for (long long int i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                isAlreadySorted = false;
                break;
            }
        }
        long long int rotationPoint = -1;

        if (isAlreadySorted == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool isValidAfterRotation = true;
            for (long long int i = 1; i < size; i++)
            {
                if (array[i - 1] > array[i])
                {
                    rotationPoint = i;
                    break;
                }
            }
            for (long long int i = rotationPoint; i < size - 1; i++)
            {
                if (array[i] > array[i + 1])
                {
                    isValidAfterRotation = false;
                    break;
                }
            }
            if (isValidAfterRotation == true)
            {
                for (long long int i = 0; i < rotationPoint - 1; i++)
                {
                    if (array[i] > array[i + 1])
                    {
                        isValidAfterRotation = false;
                        break;
                    }
                }
                if (array[size - 1] > array[0])
                {
                    isValidAfterRotation = false;
                }
            }
            if (isValidAfterRotation == true)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
