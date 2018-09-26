#include <iostream>
#include "lib.h"
#include "personnage.h"

int main(void)
{
	calcul* calcul1 = new  calcul();

	std::cout << "sommes" << calcul1->somme(10,1)<< std::endl;
	
	calcul* calcul2 = new calcul();
	std::cout << "soustraction "<< calcul2->soustraction(10,1) << std::endl;

	calcul* calcul3 = new calcul();
	std::cout << "produit"<< calcul3->produit(10,10) << std::endl;

	calcul* calcul4 =new calcul();
	std::cout << "division "<< calcul4->division(10,10) <<std::endl;

	personnage* personnage1 = new personnage();

	std::cout << "vie de " << personnage1->life(500) << std::endl;
	return 0;
}



