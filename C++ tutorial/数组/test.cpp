#include<iostream>
using namespace std;


int main()
{
	int *a[5];
	int b[]={1,2,3,4,5};

	a[0]=&b[0];
	for (int i = 0; i < 5; ++i)
	{
		cout<<*(a[0]+i)<<endl;
	}
	
	return 0;
}