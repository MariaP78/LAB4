#pragma once
#include "Medikation.h"
#include <vector>
using namespace std;

class ApothekeRepo
{
	friend class Medikation;

public:
	vector <Medikation> med;

	ApothekeRepo();
	void hinzufugen(Medikation m);
	void loschen(string n, int k);
	void bearbeiten(string n, int k);
	bool existieren(Medikation m);
};

