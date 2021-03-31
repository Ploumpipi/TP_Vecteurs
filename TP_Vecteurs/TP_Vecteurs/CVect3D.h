#pragma once
#include "CVect2D.h"

class CVect3D : public CVect2D {
private :
	float flt_z;
protected:

public:
	//Constructeurs
	//CVect3D();
	CVect3D(float fl_x=1, float fl_y=1, float fl_z=1);

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
};
