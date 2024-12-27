#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long start, end;
    cin >> start >> end;
    cout << "YES" << endl;
    for (long long i = start; i <= end; i += 2)
    {
        cout << i << " " << i + 1 << endl;
    }
}
