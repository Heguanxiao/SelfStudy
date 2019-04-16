#include<iostream>
#include<string>

using namespace std;

string test(){
	string ret;
	ret="hello world!";
	if (!ret.empty()){
		return ret;
	}
	else{
		return "No";
	}
}

int main()
{
	cout<<test()<<endl;
	return 0;
}