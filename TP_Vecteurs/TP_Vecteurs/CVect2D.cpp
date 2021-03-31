#include "CVect2D.h"
#include <iostream>

using namespace std;

CVect2D::CVect2D(float fl_x, float fl_y)
{
	this->flt_x = fl_x;
	this->flt_y = fl_y;
}

CVect2D::CVect2D(CVect2D& v)
{
	this->flt_x = v.flt_x;
	this->flt_y = v.flt_y;
}

CVect2D::~CVect2D()
{

}

float CVect2D::getX() const
{
	return flt_x;
}

float CVect2D::getY() const
{
	return flt_y;
}

void CVect2D::setX(float fl_x)
{
	this->flt_x = fl_x;
}

void CVect2D::setY(float fl_y)
{
	this->flt_y = fl_y;
}

void CVect2D::addition()
{
	this->flt_x = flt_x + flt_y;
	this->flt_y = flt_x + flt_y;
}

void CVect2D::soustraction()
{
	this->flt_x = flt_x - flt_y;
	this->flt_y = flt_x - flt_y;
}

void CVect2D::multiplication()
{
	this->flt_x = flt_x * flt_y;
	this->flt_y = flt_x * flt_y;
}

void CVect2D::division()
{
	if (flt_x != 0 && flt_y != 0) {
		this->flt_x = flt_x / flt_y;
		this->flt_y = flt_x / flt_y;
	}
}

void CVect2D::affiche() const
{
	cout << "X : " << flt_x << ',' << " Y : " << flt_y << endl;
}

bool coincide2D(const CVect2D& v, const CVect2D& w)
{
	return v.flt_x == w.flt_x && v.flt_y == w.flt_y;
}
