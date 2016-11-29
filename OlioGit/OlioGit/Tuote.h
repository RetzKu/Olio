#include <iostream>
#include <string>
#ifndef Tuote_H
#define Tuote_H


class Tuote
{
public:
	Tuote(std::string N, float H);

	void Tulosta();
	void Tallennus();


	~Tuote();
private:
	std::string Nimi;
	float Hinta;

};

#endif