#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

void add_child(multimap<string, string> &families, const string &familiy, const string &child)
{
	families.insert({familiy, child});	
}

int main()
{
	multimap<string, string> families;
	
	add_child(families, "张", "强");
	add_child(families, "王", "宝强");
	add_child(families, "刘", "大概就噶");
	add_child(families, "张", "结果看记得给");

	for(auto &f : families)
		cout << f.first << "家的孩子：" << f.second << endl;
	
	return 0;
}
