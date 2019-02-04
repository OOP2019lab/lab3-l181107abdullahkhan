#include "rectangle.h"

int rectangle::getlength()
{
	return length;
}
int rectangle::getwidth()
{
	return width;
}
int rectangle::area()
{
	return length*width;
}
void rectangle::setlen(int l)
{
	 length = l;
}
void rectangle::setwid(int w)
{
	 width = w;
}
void rectangle::rotaterec()
{
	int t;
	t = width;
	width = length;
	length = t ;
}
void rectangle::draw()
{
	for (int i = 0 ; i < width ;i++)
	{
		for (int j = 0 ; j < length ; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
