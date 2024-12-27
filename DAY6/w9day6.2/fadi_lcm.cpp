#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int num;
    cin >> num;
    long long int result = 1;
    for(long long int i = 1; i * i <= num; i++)
    {
        if(num % i == 0 && (i / __gcd(i*1LL, num / i)) * (num / i) == num)
            result = i;
    }
    cout << result << " " << num / result << endl;
}
