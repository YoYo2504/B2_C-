#include <iostream>
#include <lib.h>

int main(void)
{
	calcul* calcul1 = new  calcul();
	calcul1->somme(3, 5);

	cout << "sommes" << calcul1::somme << endl;
}


