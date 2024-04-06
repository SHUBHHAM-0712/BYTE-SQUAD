#include <iostream>
#include <tr1/unordered_map>
using namespace std;

void PrintWordCloude(vector<pair<string, int>> &v)
{
    ofstream fo("word_cloud.txt");
    ofstream fo22("Word_Cloud222.py");
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
        cout << v[i].first << " " << v[i].second << endl;
    }

    for (int i = 0; i < temp; i++)
    {
        fo << v[i].first << " " << v[i].second << "\n";
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
