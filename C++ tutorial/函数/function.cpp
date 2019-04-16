#include<iostream>
#include<string>

using namespace std;

void add(int* x){
	(*x)++;
}

int main()
{
	int a=1;
	cout<<a<<endl;
	add(&a);
	cout<<a<<endl;
	return 0;
}