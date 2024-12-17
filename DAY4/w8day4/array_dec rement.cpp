#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while(t--)
    {
        long long int size;
        cin >> size;
        long long int array_a[size];
        long long int array_b[size];

        for(long long int i = 0; i < size; i++)
        {
            cin >> array_a[i];
        }
        for(long long int i = 0; i < size; i++)
        {
            cin >> array_b[i];
        }
        vector<long long int> differences_non_zero;
        vector<long long int> differences_zero;
        for(long long int i = 0; i < size; i++)
        {
            if(array_b[i] != 0)
            {
                differences_non_zero.push_back(array_a[i] - array_b[i]);
            }
            else
            {
                differences_zero.push_back(array_a[i] - array_b[i]);
            }
        }
        bool is_valid = true;
        for(long long int i = 0; i < size; i++)
        {
            if(array_a[i] < array_b[i])
            {
                is_valid = false;
                break;
            }
        }
        if(differences_non_zero.size() == 1)
        {
            if(array_a[0] < array_b[0])
            {
                is_valid = false;
            }
        }
        else if(differences_non_zero.size() > 1)
        {
            for(long long int i = 0; i < differences_non_zero.size() - 1; i++)
            {
                if(differences_non_zero[i] != differences_non_zero[i + 1])
                {
                    is_valid = false;
                    break;
                }
            }
        }
        sort(differences_zero.begin(), differences_zero.end());
        if(!differences_zero.empty() && !differences_non_zero.empty() && differences_zero.back() > differences_non_zero[0])
        {
            is_valid = false;
        }
        if(is_valid)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

