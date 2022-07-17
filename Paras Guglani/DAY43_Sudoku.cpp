#include <bits/stdc++.h>
using namespace std;
int board[9][9];
// https : // www.codechef.com/problems/AX06
        bool
        isPossible(int num, int row, int col)
{
    // in same row

    for (int j = 0; j < 9; j++)
    {
        if (board[row][j] == num)
        {
            return false;
        }
    }

    // in same coloumn
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == num)
        {
            return false;
        }
    }
    // in same box
    // i-i%3 to i- i%3+3

    // check box of 9 nums
    int rowfactor = row - (row % 3);
    int colfactor = col - (col % 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i + rowfactor][j + colfactor] == num)
            {
                return false;
            }
        }
    }

    return true;
}

bool findEmptylocation(int &row, int &col)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] == 0)
            {
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}
bool solveSudoku()
{
    int row, col;
    if (!findEmptylocation(row, col))
    {
        return true;
    }
    for (int i = 1; i <= 9; i++)
    {
        if (isPossible(i, row, col))
        {
            board[row][col] = i;
            if (solveSudoku())
            {
                return true;
            }
            board[row][col] = 0;
        }
    }

    return false;
}
int main()
{
    for (int i = 0; i < 9; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            board[i][j] = s[j] - '0';
        }
    }
    // for (int i = 0; i < 9; i++)
    // {
    //     for (int j = 0; j < 9; j++)
    //     {
    //         cin >> board[i][j];
    //     }
    // }

    bool issolved = solveSudoku();
    if (issolved)
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << board[i][j];
            }
            cout << endl;
        }
        // for (int i = 0; i < 9; i++)
        // {
        //     for (int j = 0; j < 9; j++)
        //     {
        //         cout << board[i][j] << " ";
        //     }
        //     cout << endl;
        // }
    }
   
    return 0;
}