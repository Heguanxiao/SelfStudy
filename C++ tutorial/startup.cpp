#include <iostream>
#include<string>
using namespace std;


class Sales_data
{
public:
	Sales_data(const string s, unsigned cnt, double price){
		bookNo = s;
		units_sold = cnt;
		revenue = cnt*price;
	}
	void print(){
		cout<<bookNo<<' '<<units_sold<<' '<<revenue<<endl;
	}
private:
	string bookNo;
	unsigned units_sold;
	double revenue;
	
};
int main()
{
	string s1;
	unsigned cnt;
	double price;
	cin>>s1>>cnt>>price;
	Sales_data s = Sales_data(s1,cnt,price);
	s.print();
}