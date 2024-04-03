#include <iostream>
#include <tr1/unordered_map>
using namespace std;

void PrintWordCloude(vector<pair<string, int>> &v)
{
    ofstream fo("word_cloud.html");
    if(!fo.is_open()) {
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

    fo << "<html>\n<title>Word Cloud</title>\n<link rel=\"stylesheet\" type=\"text/css\" href=\"style.css\">\n</head>\n<body>\n<div class=\"para\">\n";

    for (int i = 0; i < temp; i++)
    {
        fo << "<span class=\"text" << i + 1 << "\">" + v[i].first + "</span><br>\n";
    }
    fo.close();
}