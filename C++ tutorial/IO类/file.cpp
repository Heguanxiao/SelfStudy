#include<iostream>
#include <fstream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
	ifstream input("in.txt");
	ofstream output("out.txt");
	string temp;
	while(input>>temp)
	{
		output<<temp;
		cout<<temp;
	}

	// input>>temp;
	// cout<<temp;
	return 0;
}