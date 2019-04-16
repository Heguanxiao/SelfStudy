#include <iostream>

using namespace std;

int main()
{
	double array[] = {0.134,0.22,0.51};
	// p;
	// p=array;
	double *p = array; //数组指针

	cout << "This is a test!";
	cout << "What are you going to do?" << endl;
	for (int i = 0; i < 3; ++i)
	{
		cout << array[i] <<endl;
		cout << *(p+i) <<endl;
	}
	return 0;
}