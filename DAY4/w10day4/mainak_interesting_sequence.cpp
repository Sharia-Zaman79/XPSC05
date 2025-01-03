#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;

        if (n > m || (n % 2 != m % 2)) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
            // Fill n-1 elements with 1
            for (int i = 1; i < n; i++) {
                cout << 1 << " ";
            }
            // Last element to balance the sum
            cout << m - (n - 1) << endl;
        }
    }
    return 0;
}
