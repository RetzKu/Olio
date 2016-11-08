#include "Tuote.h"
#include <iostream>

Tuote::Tuote(std::string N, float H)
	: Nimi(N), Hinta(H){

}

void Tuote::Tulosta()
{
	std::cout << "Nimi:	" << Nimi << "		" << Hinta << std::endl;
}


Tuote::~Tuote(){}
