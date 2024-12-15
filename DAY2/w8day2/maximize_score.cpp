#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
        int Score = INT_MAX;
        for (int i = 0; i < N; ++i)
        {
            int maxScore = 0;
            if (i > 0)
            {
                maxScore = max(maxScore, abs(A[i] - A[i - 1]));
            }
            if (i < N - 1)
            {
                maxScore = max(maxScore, abs(A[i] - A[i + 1]));
            }
            Score = min(Score, maxScore);
        }
        cout << Score << '\n';
    }
    return 0;
}
