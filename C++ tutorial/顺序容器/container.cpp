#include<iostream>
#include<string>
#include<list>
#include<vector>


using namespace std;

int main(int argc, char const *argv[])
{
	list<string> a = {"test","new"};
	auto temp = a.begin();
	while(temp!=a.end())
	{
		cout<<*temp<<' ';
		temp++;
	}
	a.push_back("attribute");
	temp = a.begin();
	while(temp!=a.end())
	{
		cout<<*temp<<' ';
		temp++;
	}

	list<string> b ={"Hello", "New", "World"};
	a.swap(b);
	temp = a.begin();
	while(temp!=a.end())
	{
		cout<<*temp<<' ';
		temp++;
	}
	return 0;
}