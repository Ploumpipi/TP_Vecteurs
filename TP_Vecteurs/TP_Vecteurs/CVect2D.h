#pragma once

class CVect2D {
private:
	float flt_x = 0, flt_y = 0;

protected:

public:
	//Constructeur
	//CVect2D();
	CVect2D(float fl_x=1, float fl_y=2);

	//Constructeur de copie
	CVect2D(CVect2D& v);

	//Destructeur
	~CVect2D();

	//Accesseurs
	float getX()const;
	float getY()const;

	//Mutateurs
	void setX(float fl_x=6);
	void setY(float fl_y=7);

	//Fonction amie
	friend bool coincide2D(const CVect2D& v, const CVect2D& w);

	//Fonctions usuelles
	void addition();
	void soustraction();
	void multiplication();
	void division();

	//Fonction affiche
	void affiche()const;

};