#include<iostream>
#include<fstream>
#include<string>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
	istream_iterator<int> in_iter(cin);
	istream_iterator<int> eof;
	vector<int> vi;
	while(in_iter != eof)
		vi.push_back(*in_iter++);
	sort(vi.begin(), vi.end());

	ostream_iterator<int> out_iter(cout, " ");
	unique_copy(vi.begin(), vi.end(), out_iter);

	return 0;
}
