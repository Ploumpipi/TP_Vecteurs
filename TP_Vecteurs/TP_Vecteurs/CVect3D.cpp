#include "CVect3D.h"

CVect3D::CVect3D()
{
	this->setX(0);
	this->setY(0);
	this->flt_z = 0;
}

CVect3D::CVect3D(float fl_x, float fl_y, float fl_z):CVect2D(fl_x, fl_y)
{
	this->flt_z = fl_z;
}

CVect3D::~CVect3D()
{

}

/*CVect3D::CVect3D(CVect3D& v)
{
	this->setX(v.getX());
	this->setY(v.getY());
	this->flt_z = v.flt_z;
}*/

CVect3D::CVect3D(CVect3D& v) :CVect2D(v) {
	this->flt_z = v.flt_z;
}

float CVect3D::getZ()
{
	return this->flt_z;
}

void CVect3D::setZ(float fl_z)
{
	this->flt_z = fl_z;
}

CVect3D CVect3D::operator+(CVect3D& v) const
{
	CVect3D v_temp;
	v_temp.setX(this->getX() + v.getX());
	v_temp.setY(this->getY() + v.getY());
	v_temp.flt_z = this->flt_z + v.flt_z;

	return v_temp;
}

CVect3D CVect3D::operator/(CVect3D& v)
{
	CVect3D v_temp;
	if (v.getX() != 0 && v.getY() != 0 && flt_z != 0) {
		v_temp.setX(this->getX() / v.getX());
		v_temp.setY(this->getY() / v.getY());
		v_temp.flt_z = this->flt_z / v.flt_z;

		return v_temp;
	}
	return *this;
}

CVect3D CVect3D::operator-(CVect3D& v) const
{
	CVect3D v_temp;
	v_temp.setX(this->getX() - v.getX());
	v_temp.setY(this->getY() - v.getY());
	v_temp.flt_z = this->flt_z - v.flt_z;

	return v_temp;
}

CVect3D CVect3D::operator*(CVect3D& v) const
{
	CVect3D v_temp;
	v_temp.setX(this->getX() * v.getX());
	v_temp.setY(this->getY() * v.getY());
	v_temp.flt_z = this->flt_z * v.flt_z;

	return v_temp;
}

void CVect3D::affiche() const
{
	CVect2D::affiche();
	cout << "Z : " << this->flt_z << endl;
}

CVect3D CVect3D::operator=(const CVect3D& v)
{
	this->setX(v.getX());
	this->setY(v.getY());
	this->flt_z = v.flt_z;

	return *this;
}

bool coincide3D(const CVect3D& v, const CVect3D& w, const CVect3D& x)
{
	return	v.getX() == w.getX() == x.getX() &&
			v.getY() == w.getY() == x.getY() &&
			v.flt_z == w.flt_z == x.flt_z;
}

ostream& operator<<(ostream& os, const CVect3D& v)
{
	// TODO: insérer une instruction return ici
	os << "Le beau X : " << v.getX() << ",\n" << "Le beau Y : " << v.getY() << ",\n" << "Le beau Z : " << v.flt_z << endl;
	return os;
}
