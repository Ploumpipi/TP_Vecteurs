#include "CVect3D.h"

int main() {
	CVect2D v1(5, 6);
	v1.affiche();

	CVect3D v2(5, 6, 7);
	//cout << " Z : " << v2.getZ() << endl;
	v2.affiche();
}