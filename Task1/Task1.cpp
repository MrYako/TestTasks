#include <iostream>
#include <string>

using namespace std;

void main()
{
    string OutputStr, InputStr;
    while (getline(cin, InputStr))
    {
        if (InputStr.empty()) return;

        int arr[256 * sizeof(char)] = {0};

        for (char& c : InputStr)
        {
            c = tolower(c);
            ++arr[c];
        }

        for (char& c : InputStr)
        {
            if (arr[c] > 1)
                OutputStr += ")";
            else
                OutputStr += "(";
        }
        
        cout << OutputStr << "\n";
        InputStr.clear();
        OutputStr.clear();
    }
}
