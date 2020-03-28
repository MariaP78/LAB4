#pragma once
#include <cstring>
#include <iostream>
using namespace std;

class Medikation
{
private:
	string Name;
	int Konzentration;
	int Menge;
	float Preis;

public:
	Medikation();
	Medikation(string name, int konzentration, int menge, float preis);
	string get_Name();
	int get_Konzentration();
	int get_Menge();
	float get_Preis();
	void set_Name(string name);
	void set_Konzentration(int konzentration);
	void set_Menge(int menge);
	void set_Preis(float preis);
	void zeigen();
	//vector <string> attribute_hinzufugen();
	//void hinzufugen(vector <string> m);
	//void loschen(vector <string> m);
	//void bearbeiten(vector <string> m);

};

