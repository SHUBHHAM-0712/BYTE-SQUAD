#include <bits/stdc++.h>
#include <tr1/unordered_map>
using namespace std;

/*Including All function files....*/
#include "Split_String.cpp"
#include "Frequency_Count_&_Sort.cpp"
#include "Print_WordCloude.cpp"

int main()
{
    unordered_map<string, int> m;
    vector<string> vect;
    string str;

    int j;
    while (j != 0)
    {
        cout << "Enter 1 to Read File else 0: ";
        cin >> j;

        if (j == 1)
        {
            string filename;
            cout << "Enter File Name: ";
            cin >> filename;
            ifstream fi(filename);
            getline(fi, str, '*');

            vect = splitStringIntoTokens(str);

            m = updateFrequency(vect, m);
        }
        else
        {
            cout << "You Don't Want To Further Read Any File..." << endl;
            break;
        }
    }

    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);

    PrintWordCloude(v);

    return 0;
}
