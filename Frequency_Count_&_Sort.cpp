#include <bits/stdc++.h>
#include <tr1/unordered_map>
using namespace std;

unordered_map<string, int> updateFrequency(vector<string> vect, unordered_map<string, int> m)
{
    for (const auto &word : vect)
    {
        if (word == "in" || word == "the" || word == "his" || word == "her" || word == "a" || word == "an" || word == "am" || word == "have" || word == "has" || word == "had" || word == "such" || word == "of" || word == "by" || word == "we" || word == "not" || word == "and" || word == "if" || word == "at" || word == "on" || word == "in" || word == "is" || word == "are" || word == "was" || word == "were" || word == "will" || word == "shall" || word == "could" || word == "would" || word == "to" || word == "be" || word == "or" || word == "this" || word == "that" || word == "some" || word == "as" || word == "it" || word == "also" || word == "for" || word == "s" || word == "its" || word == "with")
        {
            continue;
        }
        else
            m[word]++;
    }
    return m;
}
int cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}