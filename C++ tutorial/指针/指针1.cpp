#include <iostream>
#include <string>
 
using namespace std;

int main ()
{
	int val = 1;

	int *p1=&val;
	int *p2;

	p2=p1;

	cout<<*p2<<endl;



	return 0;
}