#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s = "some string";
	auto it=s.begin();
	while(it!=s.end()){
		cout<<*it;
		++it;
	}
	cout<<endl;
	auto t = s.begin();
	if (!t->empty())
	{
		cout<<"success!";
	}
	return 0;
}


