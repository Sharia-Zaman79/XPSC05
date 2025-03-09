#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    while (t--) {
        int n; // Number of constraints
        cin >> n;
        long long minK = 1, maxK = 1e9; // Range of valid k
        vector<long long> notEqual;

        for (int i = 0; i < n; ++i) {
            int a; long long x;
            cin >> a >> x;
            if (a == 1) {
                minK = max(minK, x); // k >= x
            } else if (a == 2) {
                maxK = min(maxK, x); // k <= x
            } else if (a == 3) {
                notEqual.push_back(x); // k != x
            }
        }

        // Count valid k within the range [minK, maxK]
        int count = 0;
        for (long long k = minK; k <= maxK; ++k) {
            if (find(notEqual.begin(), notEqual.end(), k) == notEqual.end()) {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
