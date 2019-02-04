// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "rectangle.h"


int main()
{
	rectangle rect;
	int l , w;
	cout << "Enter length";
	cin >> l;
	cout << "Enter width";
	cin >> w;
	rect.setlen(l);
	rect.setwid(w);
	cout << "Length: "<< rect.getlength()<< endl;
	cout << "Width: " << rect.getwidth()<< endl;
	rect.rotaterec();
	rect.draw();





	return 0;
}

