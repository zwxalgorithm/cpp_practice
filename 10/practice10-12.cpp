#include<iostream>
#include<fstream>
#include<vector>
#include"Sales_data.h"
#include<algorithm>

using namespace std;

double
Sales_data::avg_price() const
{
	if(units_sold)
		return revenue/units_sold;
	else
		return 0;
}

istream &
read(istream &is, Sales_data &item)
{
	double price = 0.0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream &
print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}

int main(int argc, char *argv[])
{
	ifstream in(argv[1]);
	if(!in)
	{
		cout << "Open file error" << endl;
		exit(1);
	}
	
	vector<Sales_data> sds;
	Sales_data sd;
	while(read(in, sd))
	{
		sds.push_back(sd);
	}
	
	sort(sds.begin(), sds.end(), compareIsbn);
	
	for(const auto &s : sds)
	{
		print(cout, s);
		cout << endl;
	}

	return 0;
}
