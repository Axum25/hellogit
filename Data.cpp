#include <iostream>
#include "Data.h"


using namespace std;

Data::Data()
{
	x = 0;
	y = 0.0;
}
Data::Data(int a, float b)
{
	x(a);
	y(b);
}
int Data::getX()
{
	return x;
}
void Data::setX()
{
	x = a;
}
float Data::getY()
{
	return y;
}
void Data::setY(float b)
{
	y = b;
}
