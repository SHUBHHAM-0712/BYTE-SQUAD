#include <bits/stdc++.h>
using namespace std;

vector<string> splitStringIntoTokens(string str)
{
    string token;
    vector<string> vect;
    int i = 0;
    for (char c : str)
    {
        if (isalpha(c))
        {
            token.push_back(tolower(c));
        }
        else if (!token.empty())
        {
            vect.push_back(token);
            token.clear();
        }
    }
    if (!token.empty())
    {
        vect.push_back(token);
    }
    return vect;
}
