#include<iostream>
#include<fstream>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

int main(int argc, char *argv[])
{
	ifstream in(argv[1]);
	if(!in)
	{
		cout << "Can not open file!" << endl;
		exit(1);
	}

	map<string, size_t> word_count;
	string word;
	while(in >> word)
		++word_count[word];
	for(const auto &w : word_count)
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times " : " time ") << endl;
	
	return 0;
}
