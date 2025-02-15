#include <bits/stdc++.h>
using namespace std;
void find_winner(vector<string> &board)
{
    int min_white_moves = INT_MAX;
    int min_black_moves = INT_MAX;
    for (int c = 0; c < 8; ++c)
    {
        for (int r = 0; r < 8; ++r)
        {
            if (board[r][c] == 'W')
            {
                bool can_move = true;
                for (int check_r = r - 1; check_r >= 0; --check_r)
                {
                    if (board[check_r][c] == 'B')
                    {
                        can_move = false;
                        break;
                    }
                }
                if (can_move)
                {
                    min_white_moves = min(min_white_moves, r);
                }
            }
        }
    }
    for (int c = 0; c < 8; ++c)
    {
        for (int r = 7; r >= 0; --r)
        {
            if (board[r][c] == 'B')
            {
                bool can_move = true;
                for (int check_r = r + 1; check_r < 8; ++check_r)
                {
                    if (board[check_r][c] == 'W')
                    {
                        can_move = false;
                        break;
                    }
                }
                if (can_move)
                {
                    min_black_moves = min(min_black_moves, 7 - r);
                }
            }
        }
    }
    if (min_white_moves <= min_black_moves)
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "B" << endl;
    }
}
int main()
{
    vector<string> board(8);
    for (int i = 0; i < 8; ++i)
    {
        cin >> board[i];
    }
    find_winner(board);
    return 0;
}
