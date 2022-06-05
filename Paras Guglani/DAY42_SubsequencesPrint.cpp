#include <iostream>
using namespace std;

void print_subs(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << endl;
        return;
    }
    // if first char in input not included in output
    print_subs(input.substr(1), output);
    // if first char in input included in output
    print_subs(input.substr(1), output + input[0]);
}

int main()
{
    string input;
    cin >> input;
    string output = "";
    print_subs(input, output);
}