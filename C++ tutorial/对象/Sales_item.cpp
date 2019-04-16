#include <iostream>
#include<string>
using namespace std;

struct Sales_data
{
	string bookNo;
	unsigned units_sold=1;
	double revenue = 10.0;
	string isbn() const;
	Sales_data& combine(const Sales_data&);
};

// Sales_data add(const Sales_data&, const Sales_data&);

string Sales_data::isbn() const{
	return bookNo;
}

Sales_data& Sales_data::combine(const Sales_data &rhs){
	units_sold+=rhs.units_sold;
	revenue+=rhs.revenue;
	return *this;
}

std::ostream &print(ostream&, const Sales_data&);


ostream &print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " "
	<<item.revenue;
	return os;
}

int main()
{
	Sales_data v1;
	cout<<"----------------------"<<endl;
	cout<<v1.bookNo<<endl;

	v1.bookNo = "NewWorld";
	cout<<"----------------------"<<endl;
	cout<<v1.isbn()<<endl;
	cout<<"\n\n\n\n\n\n"<<endl;




	Sales_data v2;
	v2.units_sold=2;
	v2.revenue = 5.0;

	Sales_data v3 = v2.combine(v1);
	cout<<"units_sold: "<<v3.units_sold<<endl;
	cout<<"revenue: "<<v3.revenue<<endl;

	print(cout,v3);
	return 0;
}