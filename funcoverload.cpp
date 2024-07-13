#include<iostream>
using namespace std;
int area;
void carea(int side)
{
area=side*side;
cout<<"area of square:"<<area;
}
void carea(int length,int width)
{
area=length*width;
cout<<"The area is"<<area;
}
class rectangle;
class square
{
int side;
public:
square()
{
side=5;
}
int getside()
{
	return side;
}
};
class rectangle
{
	int length,width;
public:
rectangle()
{
length=8;
width=10;
}
int getlength()
{
	return length;
}
int getwidth()
{
	return width;
}
};
int main()
{
square s;
rectangle r;
carea(s.getside());
carea(r.getlength(),r.getwidth());
}


