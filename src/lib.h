/*! \file lib.h
*\brief description : systeme de calcul basique 
*\author Yoan
*\version 1
*
*
*
*/

#pragma once

/*!\class calcul
*\brief description
*{ce que l'on veut}
*/

class calcul{
public:
/*! \brief description : Addition
*\param nb1 description : 10
*\param nb2 description : 1
*/
	int somme(int nb1, int nb2);
/*!\brief description : Soustraction
*\param nb3 description : 10
*\param nb4 description : 1
*/
	int soustraction(int nb3,int nb4);
/*!\brief description : Multiplication
*\param nb5 description : 10
*\param nb6 description : 10
*/
	int produit(int nb5,int nb6);
/*!\brief description : Division 
*\param nb7 description : 10
*\param nb8 description : 10
*/
	int division(int nb7,int nb8);

};
