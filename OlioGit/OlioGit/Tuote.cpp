#include "Tuote.h"
#include <iostream>
#include <fstream>

Tuote::Tuote(std::string N, float H)
	: Nimi(N), Hinta(H){

}

void Tuote::Tulosta()
{
	std::cout << "Nimi:	" << Nimi << "		" << Hinta << std::endl;
}
void Tuote::Tallennus()
{
	std::ofstream myFile;
	myFile.open("myFile.txt");
	myFile << "Nimi:	" << Nimi << "		" << Hinta << std::endl;
	myFile.close();

}


Tuote::~Tuote(){}
