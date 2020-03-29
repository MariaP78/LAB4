#include <iostream>
#include "ApothekeRepo.h"
#include "Medikation.h"

using namespace std;

ApothekeRepo::ApothekeRepo() 
{
	//konstruktor
}

void ApothekeRepo::hinzufugen(Medikation m)
{
	//hinzufugt ein Medikament
	
	bool gasit = false;
	for (int i = 0; i < med.size(); i++)
		if (med[i] == m.get_Name && med[i] == m.get_Konzentration) //unice dupa nume si concentratie
		{
			gasit = true;
			m.get_Menge= m.get_Menge+1;
		}

	if (gasit == false)
	{
		med.push_back(m);
	}
}

void ApothekeRepo::loschen(string n, int k)
{
	//loscht ein Medikament

	for (int i = 0; i < med.size(); i++)
		if (med[i].get_Name == n && med[i].get_Konzentration == k) //unice dupa nume si concentratie
		{
			for (int j = i; j < med.size() - 1; i++)
				med[j] = med[j + 1];
			i--;
		}
}

void ApothekeRepo::bearbeiten(string n, int k)
{
	//bearbeitet den Preis
	Medikation m;

	for (int i = 0; i < med.size(); i++)
		if (med[i].get_Name == n && med[i].get_Konzentration == k)
		{
			m.get_Preis = m.get_Preis - 20 / 100 * m.get_Preis; //scad pretul cu 20%
		}
}

bool ApothekeRepo::existieren(Medikation m) {

	for (int i = 0; i < med.size(); i++)
		if (med[i].get_Name() == m.get_Name() && med[i].get_Konzentration() == m.get_Konzentration())
			return true;

	return false;
}

