#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <utility>

using namespace std;

int main(int argc, char *argv[])
{
	ifstream in(argv[1]);
	if(!in)
	{
		cout << "打开输入文件失败！" << endl;
		exit(1);
	}
	
	vector<pair<string, int>> data;
	string s;
	int v;
	
	while(in >> s && in >> v)
		data.push_back(pair<string, int>(s, v));
	for(const auto &d : data)
		cout << d.first << " " << d.second << endl;
	return 0;
}
