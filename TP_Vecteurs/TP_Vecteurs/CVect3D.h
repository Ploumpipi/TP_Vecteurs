#pragma once
#include "CVect2D.h"

class CVect3D : public CVect2D {
private :
	float flt_z;
protected:

public:
	//Constructeurs
	CVect3D();
	CVect3D(float fl_x, float fl_y, float fl_z);

	//Destructeur
	~CVect3D();

	//Constructeur de copies
	CVect3D(CVect3D& v);

	//Accesseur
	float getZ();

	//Mutateur
	void setZ(float fl_z);


	//Surcharge opérateur

	//Surcharge opérateur +
	CVect3D operator +(CVect3D& v)const;
	//Surcharge opérateur /
	CVect3D operator /(CVect3D& v);
	//Surcharge opérateur -
	CVect3D operator -(CVect3D& v)const;
	//Surcharge opérateur *
	CVect3D operator *(CVect3D& v)const;


	//Méthode amie
	friend bool coincide3D(const CVect3D& v, const CVect3D& w, const CVect3D& x);

	void affiche()const;


	//Travail 3
	//Surcharge <<
	friend ostream& operator<<(ostream& os, const CVect3D& v);
	//Surcharge =
	CVect3D operator=(const CVect3D& v);
};
