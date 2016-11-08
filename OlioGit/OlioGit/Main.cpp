#include "Tuote.h"
#include <vector>
#include <fstream>
using namespace std;



int main()
{


	std::vector<Tuote> Tlista;
	

	Tuote T1 = { "Sipsit", 2.1f };
	Tuote T2 = { "Sipsit1", 2.2f };
	Tuote T3 = { "Sipsit2", 2.3f };
	Tuote T4 = { "Sipsit3", 2.4f };
	Tuote T5 = { "Sipsit4", 2.5f };

	Tlista.push_back(T1);
	Tlista.push_back(T2);
	Tlista.push_back(T3);
	Tlista.push_back(T4);
	Tlista.push_back(T5);

	for (size_t i = 0; i < Tlista.size(); i++)
	{
		Tlista[i].Tulosta();
		myfile << Tlista[i]->N;
		myfile.close();
	}



}