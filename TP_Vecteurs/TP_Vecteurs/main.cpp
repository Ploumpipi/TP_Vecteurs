#include "CVect3D.h"
#include <iostream>

using namespace std;


int main() {
	CVect2D v1(5, 6);
	v1.affiche();

	CVect2D v2(6, 7);
	CVect2D v3(v2);

	CVect2D v4;
	v4 = v3 + v2;
	cout << "l'addition de v3 et v2 donne : " << endl;
	v4.affiche();
	v4 = v3 - v2;
	cout << "la soustraction de v3 et v2 donne : " << endl;
	v4.affiche();
	v4 = v3 / v2;
	cout << "la division de v3 et v2 donne : " << endl;
	v4.affiche();
	v4 = v3 * v2;
	cout << "la multiplication de v3 et v2 donne : " << endl;
	v4.affiche();

	CVect3D v5(5, 6, 7);
	//cout << " Z : " << v2.getZ() << endl;
	v5.affiche();

	CVect3D v6;

	v6 = v5 + v5;
	cout << "l'addition de v5 et v5 donne : " << endl;
	cout << v6;
	
	v6 = v5 - v5;
	cout << "la soustraction de v5 et v5 donne : " << endl;
	cout << v6;

	v6 = v5 / v5;
	cout << "la division de v5 et v5 donne : " << endl;
	cout << v6;

	v6 = v5 * v5;
	cout << "la multiplication de v5 et v5 donne : " << endl;
	cout << v6;


	CVect3D v7(5, 4, 7);
	cout << "v7 vaut : " << endl;
	cout << v7;
}