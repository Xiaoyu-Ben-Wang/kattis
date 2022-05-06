// anewalphabet
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    map<char, string> dict = {
        {'a', "@"},
        {'b', "8"},
        {'c', "("},
        {'d', "|)"},
        {'e', "3"},
        {'f', "#"},
        {'g', "6"},
        {'h', "[-]"},
        {'i', "|"},
        {'j', "_|"},
        {'k', "|<"},
        {'l', "1"},
        {'m', "[]\\/[]"},
        {'n', "[]\\[]"},
        {'o', "0"},
        {'p', "|D"},
        {'q', "(,)"},
        {'r', "|Z"},
        {'s', "$"},
        {'t', "']['"},
        {'u', "|_|"},
        {'v', "\\/"},
        {'w', "\\/\\/"},
        {'x', "}{"},
        {'y', "`/"},
        {'z', "2"}};

    string in;
    getline(cin, in);
    for (char &x : in)
    {
        if (x <= 'Z' && x >= 'A')
        {
            x -= ('Z' - 'z');
        }

        if (dict.find(x) != dict.end())
        {
            cout << dict[x];
        }
        else
        {
            cout << x;
        }
    }
    return 0;
    
}