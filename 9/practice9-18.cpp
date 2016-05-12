#include<iostream>
#include<deque>

using namespace std;

int main()
{
	deque<string> sd;
	string word;
	while(cin >> word)
	{
		sd.push_back(word);
	}
	for(auto si = sd.begin(); si != sd.end(); si++)
	{
		cout << *si << endl;
	}
	return 0;
}
