#include<iostream>
using namespace std;

class rectangle
{
private:
	int length;
	int width;
public:
	int getlength();
	int getwidth();
	void draw();
	void rotaterec();
	void setlen(int);
	void setwid(int);
	int area();
};