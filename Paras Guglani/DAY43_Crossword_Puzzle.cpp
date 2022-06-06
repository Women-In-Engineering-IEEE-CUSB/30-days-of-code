/* CodingNinjas has provided a crossword of 10*10 grid. The grid contains '+' or '-' as its cell values. Now, you are also provided with a word list that needs to placed accurately in the grid. Cells marked with '-' are to be filled with word list.
For example, The following is an example for the input crossword grid and the word list.
+-++++++++
+-++-+++++
+-------++
+-++-+++++
+-++-+++++
+-++-+++++
++++-+++++
++++-+++++
++++++++++
----------
CALIFORNIA;NIGERIA;CANADA;TELAVIV
Output for the given input should be:
+C++++++++
+A++T+++++
+NIGERIA++
+A++L+++++
+D++A+++++
+A++V+++++
++++I+++++
++++V+++++
++++++++++
CALIFORNIA
Note: We have provided such test cases that there is only one solution for the given input.
Input format:
The first 10 lines of input contain crossword. Each of 10 lines has a character array of size 10. Input characters are either '+' or '-'.
The next line of input contains the word list, in which each word is separated by ';'.
Output format:
Print the crossword grid, after placing the words of word list in '-' cells.
Sample Test Cases:
Sample Input 1:
+-++++++++
+-++-+++++
+-------++
+-++-+++++
+-++-+++++
+-++-+++++
++++-+++++
++++-+++++
++++++++++
----------
CALIFORNIA;NIGERIA;CANADA;TELAVIV
Sample Output 1:
+C++++++++
+A++T+++++
+NIGERIA++
+A++L+++++
+D++A+++++
+A++V+++++
++++I+++++
++++V+++++
++++++++++
CALIFORNIA */

#include <bits/stdc++.h>
using namespace std;
#define N 10

bool isValidHorizontal(char board[N][N], string word, int row, int col, bool *helper)
{
    int size = word.size();
    for (int j = col, i = 0; j < col + size; j++, i++)
    {
        // if any crossword char is not equal to words character and is not -
        if (board[row][j] != word[i] && board[row][j] != '-')
        {
            return false;
        }
    }
    return true;
}
bool isValidVertical(char board[N][N], string word, int row, int col, bool *helper)
{
    int size = word.size();

    for (int i = row, j = 0; i < row + size; i++, j++)

    { // if any crossword char is not equal to words character and is not -
        if (board[i][col] != word[j] && board[i][col] != '-')
        {
            return false;
        }
    }
    return true;
}

void setHorizontal(char board[N][N], string word, int row, int col, bool *helper)
{
    int size = word.size();
    for (int j = col, i = 0; j < col + size; j++, i++)
    {
        //if - then insert as well as change helper array to true. helpful if needed to reset so we reset only those we set by this word and not previous
        if (board[row][j] == '-')
        {
            board[row][j] = word[i];
            helper[j] = true;
        }
    }
}

void setVertical(char board[N][N], string word, int row, int col, bool *helper)
{
    int size = word.size();
    for (int i = row, j = 0; i < row + size; i++, j++)
    {
        if (board[i][col] == '-')
        {
            board[i][col] = word[j];
            helper[i] = true;
        }
    }
}
void resetHorizontal(char board[N][N], string word, int row, int col, bool *helper)
{
    int size = word.size();
    for (int j = col, i = 0; j < col + size; j++, i++)
    {
        //check if it was set by this word using helper array
        if (helper[j])
        {
            board[row][j] = '-';
            // helper[j] = false;
        }
    }
}
void resetVertical(char board[N][N], string word, int row, int col, bool *helper)
{
    int size = word.size();
    for (int i = row, j = 0; i < row + size; i++, j++)
    {
        if (helper[i])
        {
            board[i][col] = '-';
            // helper[i] = false;
        }
    }
}

bool crossword(char board[N][N], vector<string> words, int index)
{
    //* all words are successfully placed in the
    //* EX: in words arry 4 words are present and index 4 accured
    if (index == words.size())
        return true;
    for (int r = 0; r < N; r++)
    {
        for (int c = 0; c < N; c++)
        {
            // '-' or same char as first of current word
            // set word by word
            if ((board[r][c] == '-') || (board[r][c] == words[index][0]))
            {
                //herlper array for resetting
                bool *helper = new bool[words.size()];
                memset(helper, false, sizeof(helper));
               
                if (isValidHorizontal(board, words[index], r, c, helper))
                {
                    setHorizontal(board, words[index], r, c, helper);
                    //calling for next word
                    if (crossword(board, words, index + 1))
                    {
                        return true;
                    }
                    resetHorizontal(board, words[index], r, c, helper);
                }
                if (isValidVertical(board, words[index], r, c, helper))
                {
                    setVertical(board, words[index], r, c, helper);
                    if (crossword(board, words, index + 1))
                    {
                        return true;
                    }
                    resetVertical(board, words[index], r, c, helper);
                }
            }
        }
    }
    //could not insert this word
    return false;
}
int main()
{
    char board[N][N];
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < N; j++)
        {
            board[i][j] = s[j];
        }
    }
    vector<string> words;
    string str;
    cin >> str;
    stringstream ss(str);

    while (ss.good())
    {
        string substr;
        getline(ss, substr, ';');
        words.push_back(substr);
    }

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<words[i]<<endl;
    // }

    if (crossword(board, words, 0))
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << board[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}