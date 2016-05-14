#include<iostream>
#include<iterator>
#include<algorithm>
#include"Sales_item.h"

using namespace std;

int main()
{
	vector<Sales_item> vs;
	istream_iterator<Sales_item> in_item(cin);
	istream_iterator<Sales_item> eof;
	
	while(in_item != eof)
		vs.push_back(*in_item++);
	if(vs.empty())
	{
		cerr << "No data?" << endl;
		return -1;
	}

	sort(vs.begin(), vs.end(), compareIsbn);
	
	auto l = vs.begin();
	while(l != vs.end())
	{
		auto item = *l;
		auto r = find_if(l + 1, vs.end(), [item](const Sales_item &item1){return item1.isbn() != item.isbn();});
		cout << accumulate(l + 1, r, item) << endl;
		l = r;
	}
	
	return 0;
}

