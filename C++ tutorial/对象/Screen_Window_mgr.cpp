#include <iostream>
#include<string>
using namespace std;

class Screen
{
public:
	typedef string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht*wd, c){}
	char get() const{return contents[cursor];}
	inline char get(pos ht, pos wd) const;
	Screen &move(pos r, pos c);
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	
};

int main(int argc, char const *argv[])
{
	// char c = 'T';
	Screen s1 = Screen(12,10,'t');
	cout<<s1.get()<<endl;
	return 0;
}








