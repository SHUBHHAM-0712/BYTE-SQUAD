#include <filesystem> // for directory_iterator
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "Split_String.cpp"
#include "Frequency_Count_&_Sort.cpp"
#include "Print_WordCloude.cpp"

namespace fs = std::filesystem;


int main()
{
    unordered_map<string, int> m;
    string folderPath = "C:/Users/ramol/OneDrive/Desktop/COURSES/Word Cloud Generator/Final Files/New folder"; // Change this to your folder path
    
    try
    {
        // Iterate over the files in the folder
        for (const auto &entry : fs::directory_iterator(folderPath))
        {
            string filename = entry.path().string();
            ifstream fi(filename);
            if (!fi.is_open())
            {
                cerr << "Error opening file: " << filename << endl;
                continue;
            }
            string str;
            getline(fi, str, '*');  // '*' allows to store whole content of the file into a string
            vector<string> vect=splitStringIntoTokens(str);

            // Count frequency of words excluding common words
            m  = updateFrequency(vect,m);
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    // Convert the map to a vector of pairs for sorting
    vector<pair<string, int>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);

    PrintWordCloude(v);    
    cout<<endl;
    
    return 0;
}
