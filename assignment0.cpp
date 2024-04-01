#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "Instructor Joseph", "Code was borrowed from: https://code.visualstudio.com/docs/cpp/config-mingw"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
}