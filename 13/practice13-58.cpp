#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Foo
{
public:
	Foo sorted() &&;
	Foo sorted() const &;

private:
	vector<int> data;
};

Foo Foo::sorted() &&
{
	cout << "右值引用版本" << endl;
	sort(data.begin(), data.end());
	return *this;
}

Foo Foo::sorted() const &
{
	cout << "左值引用版本" << endl;
	Foo ret(*this);
//	return ret.sorted();
	return Foo(*this).sorted();	
}

int main(int argc, char **argv)
{
	Foo f;
	f.sorted();
	return 0;
}
