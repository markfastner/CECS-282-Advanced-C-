//Names: Aryan Sanyal, Mark Fastner, Abraham Ungos
// Week 13 lab 2
//4/15/20
//Time demoed: 8:31 PM

#include <iterator>
#include <map>
#include <fstream>
#include <iostream>


using namespace std;

int main()
{
    map<string, int> m1;
    map<string, int>::iterator it;

    string word = " ";
    //int count = 0;
    ifstream MyFile("text for lab.txt");

    if (MyFile.is_open()) {
        while (MyFile >> word) {
            for (int i = 0, len = word.size(); i < len; i++)
            {
                if (ispunct(word[i]))
                {
                    word.erase(i--, 1);
                    len = word.size();
                }
                word[i] = tolower(word[i]);
            }
            it = m1.find(word);
            if (it != m1.end())
                it->second++;
            else {
                m1.insert({word, 1});
            }
        }
    }
    for (it = m1.begin(); it != m1.end(); it++) {
        cout << "key: " << it->first << endl;
        cout << " value: " << it->second << endl << endl;
    }
    MyFile.close();

}