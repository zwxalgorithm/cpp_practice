#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
	list<int> ilist = {1, 2, 3, 4, 5, 6, 7};
	vector<int> ivec = {7, 6, 5, 4, 3, 2, 1};
	vector<double> devc(ilist.begin(), ilist.end());
	vector<double> dvec1(ivec.begin(), ivec.end());
	
	cout << devc.capacity() << " " << devc.size() << " " << devc[0] << " " << devc[devc.size() - 1] << endl;

	cout << dvec1.capacity() << " " << dvec1.size() << " " << dvec1[0] << " " << dvec1[dvec1.size() - 1] << endl;
	
	return 0;
}
