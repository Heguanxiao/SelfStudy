#include<iostream>
#include<string>
#include<vector>
using std::vector;
using namespace std;

int main()
{
	vector<string> v1={"a","an","the"};
	cout<<v1[1]<<endl;

	for (int i = 0; i < 3; ++i)
	{
		string word;
		cin>>word;
		v1.push_back(word);
	}
	for (int i = 0; i < 6; ++i)
	{
		cout<<v1[i]<<endl;
	}
	return 0;
}