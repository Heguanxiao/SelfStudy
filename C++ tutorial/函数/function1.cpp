#include<iostream>
#include<string>

using namespace std;

int count_calls(){
	static int ctr = 0;
	return ++ctr;
}

int main()
{
	for (int i = 0; i != 10; ++i)
	{
		cout<<count_calls()<<endl;
	}
	return 0;
}