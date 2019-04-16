#include <iostream>
#include <string>
 
using namespace std;

int main ()
{
	//每一个变量都有一个内存位置，每一个内存位置都定义了可使用连字号（&）运算符访问的地址，
	//它表示了在内存中的一个地址。请看下面的实例，它将输出定义的变量地址：
	int var1=10;

	int var2[10];

	cout << &var1 <<endl;

	cout << &var2 <<endl;

	//指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。
	//就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。

	int *p;
	p = &var1;

	cout <<"The address: "<<p<<endl;
	cout <<"The value: "<<*p<<endl;

	cout<<"---------------------------"<<endl;

	//在变量声明的时候，如果没有确切的地址可以赋值，为指针变量赋一个 NULL 值是一个良好的编程习惯。赋为 NULL 值的指针被称为空指针。

	int  *ptr = NULL;

	cout << "ptr 的值是 " << ptr <<endl;

	cout<<"---------------------------"<<endl;

	//指针和数组的区别，指针增加可以，数组地址不行
	int MAX=3;
	int  var[MAX] = {10, 100, 200};
	// int *ptr=NULL;
	ptr = var;
	for (int i = 0; i < MAX; i++)
	{
		// *var = i;    // 这是正确的语法
		cout<<*ptr<<endl;
		ptr++;
		cout<<*(var+i)<<endl;
		// var++;       // 这是不正确的
	}




	return 0;
}