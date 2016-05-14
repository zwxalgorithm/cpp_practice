#include<iostream>
#include<fstream>
#include<string>
#include<iterator>
#include<algorithm>

using namespace std;

int main(int argc, char *argv[])
{
	ifstream in(argv[1]);
	if(!in)
	{
		cout << "打开输入文件错误！" << endl;
		exit(1);
	}

	istream_iterator<string> in_iter(in);
	istream_iterator<string> eof;
	vector<string> words;
	while(in_iter != eof)
		words.push_back(*in_iter++);
	for(auto word:words)
		cout << word << " ";
	cout << endl;

	return 0;
}
