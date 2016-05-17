#include<iostream>
#include<memory>

using namespace std;

struct destination {};
struct connnection {};

connnection 
connect(destination *pd)
{
	cout << "open connnection" << endl;
	return connnection();
}

void
disconnection(connnection c)
{
	cout << "close connection" << endl;	
}

void
f(destination &d)
{
	cout << "直接管理connect" << endl;
	connnection c = connect(&d);

	cout << endl;
}

void
end_connection(connnection *p)
{
	disconnection(*p);
}

void 
f1(destination &d)
{
	cout << "用shared_ptr管理connect" << endl;
	connnection c = connect(&d);
	shared_ptr<connnection> p(&c, end_connection);

	cout << endl;
}

int 
main()
{
	destination d;
	f(d);
	f1(d);

	return 0;
}
