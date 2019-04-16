#include <iostream>
#include<string>
using namespace std;

struct Sales_data
{
	Sales_data() = default;
	Sales_data(const string &s):bookNo(s){}
	Sales_data(const string &s, unsigned n, double p):
				bookNo(s),units_sold(n),revenue(p*n){}
	Sales_data(istream &);
	string bookNo;
	unsigned units_sold=0;
	double revenue = 0.0;
	string isbn() const;
	double avg_price() const;
	Sales_data& combine(const Sales_data&);
};

// Sales_data add(const Sales_data&, const Sales_data&);

double Sales_data::avg_price() const{
	if (units_sold)
	{
		return revenue/units_sold;
	}
	else
		return 0;
}

string Sales_data::isbn() const{
	return bookNo;
}

Sales_data& Sales_data::combine(const Sales_data &rhs){
	units_sold+=rhs.units_sold;
	revenue+=rhs.revenue;
	return *this;
}

std::ostream &print(ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);


ostream &print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " <<item.revenue<<" "<< item.avg_price()<<endl;
	return os;
}

istream &read(istream &is, Sales_data &item)
{
	double price =0;
	is >>item.bookNo >> item.units_sold>>price;
	item.revenue = price *item.units_sold;
	return is;
}

Sales_data::Sales_data(istream &is)
{
	read(is, *this);
}



int main()
{
	Sales_data v1;
	Sales_data v2 = Sales_data("MadWorld");
	Sales_data v3 = Sales_data("HelloWorld",2,20);
	Sales_data v4 = Sales_data(cin);
	print(cout,v1);
	print(cout,v2);
	print(cout,v3);
	print(cout,v4);
	return 0;
}








