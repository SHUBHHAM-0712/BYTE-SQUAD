#include <stdio.h>
// ANSI color codes
#define RESET "\033[0m"
#define RED "\033[31m"     /* Red */
#define GREEN "\033[32m"   /* Green */
#define YELLOW "\033[33m"  /* Yellow */
#define BLUE "\033[34m"    /* Blue */
#define MAGENTA "\033[35m" /* Magenta */
#define CYAN "\033[36m"    /* Cyan */
#define WHITE "\033[37m"   /* White */
#define BOLD "\033[1m"     /* Bold */

#include <iostream>
#include <tr1/unordered_map>
using namespace std;

void PrintWordCloude(vector<pair<string, int>> &v)
{
    ofstream fo("word_cloud.txt");
    ofstream fo22("Word_Cloud.py");
    if (!fo.is_open() && !fo22.is_open())
    {
        cout << "Error opening files." << endl;
        return;
    }

    int temp;
    cout << "\nEnter No. Of Most Frequent Words Required In Word Cloud: ";
    cin >> temp;
    cout << endl;
    for (int i = 0; i < temp; i++)
    {
        printf(RED "%-15s" RESET CYAN " %-4d\n" RESET, v[i].first.c_str(), v[i].second);
    }

    for (int i = 0; i < temp; i++)
    {
        fo << v[i].first << " " << v[i].second << endl;
    }

    fo22 << "from wordcloud import WordCloud" << endl
         << "import matplotlib.pyplot as plt" << endl
         << "from PIL import Image" << endl
         << "\n#Read the text file with word frequencies " << endl
         << "with open('word_cloud.txt', 'r') as file:" << endl
         << "\tword_frequencies = {}" << endl
         << "\tfor line in file:" << endl
         << "\t\tword, frequency = line.split()" << endl
         << "\t\tword_frequencies[word] = int(frequency)" << endl
         << "\n#Generate the word cloud" << endl
         << "wordcloud = WordCloud(width=800, height=400, background_color='white').generate_from_frequencies(word_frequencies)" << endl
         << "wordcloud.generate_from_frequencies(word_frequencies)" << endl
         << "\n#Display the word cloud" << endl
         << "plt.figure(figsize=(15, 5))" << endl
         << "plt.imshow(wordcloud, interpolation='bilinear')" << endl
         << "plt.axis('off')" << endl
         << "plt.show()";
    fo.close();
    fo22.close();
}


/*
REFFERENCE:-
The Python Code to Generate Image Is Refferenced From GeeksforGeeks
*/
