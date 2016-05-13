#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>
#include"make_plural.h"

using namespace std;

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}
void biggiest(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);
    for_each(words.begin(), words.end(), [](const string &s){cout << s << " ";});
    cout << endl;
    
    auto wc = partition(words.begin(), words.end(), [sz](const string &a) {return  a.size() >= sz;});
    auto count = wc - words.begin();
    cout << count << " " << make_plural(count, "word", "s") << "of length" << sz << "or longer" << endl;
    for_each(words.begin(), wc, [](const string &s){cout << s << " ";});
    cout << endl;
}

int main(int argc, char *argv[])
{
    ifstream in(argv[1]);
    if(!in)
    {
        cout << "打开文件失败" << endl;
        exit(1);
    }
    
    vector<string> words;
    string word;
    while(in >> word)
        words.push_back(word);
    
    biggiest(words, 4);
    return 0;
}
