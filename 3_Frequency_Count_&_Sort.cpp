#include <iostream>
#include <vector>
#include <fstream>
#include <cstring>
#include <tr1/unordered_map>
using namespace std;

bool commonword(string word)
{
    ifstream ex("3.1_excluded_words.txt");
    string str;
    while (!ex.eof())
    {
        ex >> str;
        if (word == str)
            return true;
    }
    return false;
}

unordered_map<string, int> updateFrequency(vector<string> vect, unordered_map<string, int> m)
{
    int temp = 0;
    for (int i = 0; i < vect.size(); i++)
    {
        string word = vect[i];
        if (!commonword(word))
            m[word]++;
    }
    return m;
}

int cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}
