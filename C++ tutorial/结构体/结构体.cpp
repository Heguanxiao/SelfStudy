#include <iostream>
using namespace std;

int main()
{
	struct Sales_data
	{
		string bookNo;
		unsigned units_sold=0;
		double revenue = 0.0;
	};

	Sales_data s1;

	cin>>s1.bookNo>>s1.units_sold>>s1.revenue;
	cout<<s1.units_sold<<' '<<s1.revenue<<endl;
	return 0;
}