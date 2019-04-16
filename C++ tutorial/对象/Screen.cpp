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
	Screen &set(char c)
	{
		contents[cursor] = c;
		return *this;
	}
	Screen &set(pos r,pos col,char c)
	{
		contents[r*width+col] = c;
		return *this;
	}
	Screen &display(std::ostream &os)
	{
		do_display(os);
		return *this;
	}
	const Screen &display(std::ostream &os) const
	{
		do_display(os);
		return *this;
	}

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	void do_display(ostream &os) const{os<<contents;}
};

int main(int argc, char const *argv[])
{
	// char c = 'T';
	Screen s1 = Screen(3,5,' ');
	s1.set(1,1,'l');
	s1.set(1,2,'o');
	s1.set(1,3,'v');
	s1.set(1,4,'e');
	s1.set(2,1,'y');
	s1.set(2,2,'o');
	s1.set(2,3,'u');

	// cout<<s1.get()<<endl;

	// s1.set('9');
	// cout<<s1.get()<<endl;
	s1.display(cout);
	return 0;
}








