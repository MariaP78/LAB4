#pragma once
#include "ApothekeRepo.h"
#include <iostream>
#include <string>
#include <algorithm>

class ApothekeController
{
public:
	vector <Medikation> med;
	ApothekeController();
	void sortieren_nach_Name();
	void suchen_string(Medikation m);
	void kleiner_als_menge(Medikation m,int menge);
	void sortieren_nach_Preis(Medikation m);
	void meniu(int i,ApothekeRepo* repo, Medikation m);
};

