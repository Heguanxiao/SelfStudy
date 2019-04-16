#include<iostream>
using namespace std;

void swap1 (int v1,int v2)
 
{
 
  int tmp=v1;
 
  v2=v1;
 
  v1=tmp;
 
}

void swap2 (int &v1,int &v2)
 
{
 
      int tmp=v1;
 
      v1=v2;
 
      v2=tmp;
 
}

int main()
{
	int a=1,b=2;

	cout <<a<<','<<b<<endl;
	swap1(a,b);
	cout <<a<<','<<b<<endl;
	swap2(a,b);
	cout <<a<<','<<b<<endl;
	return 0;
}