#include <iostream>
#include "lib.h"
#include "personnage.h"

int main(void)
{
	calcul* calcul1 = new  calcul();

	std::cout << "sommes" << calcul1->somme(10,1)<< std::endl;

	personnage* personnage1 = new personnage();

	std::cout << "vie de " << personnage1->life(500) << std::endl;
	return 0;
}



