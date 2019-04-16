#include <iostream>

using namespace std;

void Function(double input[]){
	for (int i = 0; i < 3; ++i)
	{
		cout << input[i]<<endl;
		input[i]+=1;
		cout << "current value:"<<*(input+i)<<endl;
	}
	return;
}

int main()
{
	double array[] = {0.134,0.22,0.51};
	Function(array);
	for (int i = 0; i < 3; ++i)
	{
		cout << array[i]<<endl;
		array[i]+=1;
	}
	return 0;
}