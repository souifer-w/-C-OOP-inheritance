
#include <iostream>
using namespace std;


class sheep
{
protected:
	int width;
	int height;
public:

	sheep() :width(), height()
	{

	}

	sheep(int c1,int c2): width(c1),height(c2){}

	void sh()
	{

		cout << "the wi is " << width << "the he " << height << endl;
	}

	int area()
	{

		return width * height;
	}

};
class re :public sheep
{
public :
	re() {}
	re(int c1,int c2) :sheep() { width = c1,height =c2; }
	
	

};
class circle:private sheep
{
protected:
	int r;

public:

	circle():r(){}
	circle(int ra):r(ra){}

	void sh()
	{

		cout << "the wi is " << width << "the he " << height << endl;
	}

	int area()
	{

		return r*r*1 *12;
	}

};

int main()
{

	circle o(6);
	o.area();
	cout << o.area()<< endl;
	
	
	return 0;
}
