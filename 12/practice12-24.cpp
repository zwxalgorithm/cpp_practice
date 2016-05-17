#include <iostream>
#include <cstring>

using namespace std;

int 
main()
{
	char c;
	char *r = new char[20];
	int l;
	
	while(cin.get(c))
	{
		if(isspace(c))
			break;
		r[l++] = c;
		if(l == 20)
		{
			cout << "da dao rongliang shangxian" << endl;
			break;
		}
	}
	
	r[l] = 0;
	cout << r << endl;
	
	return 0;
}
