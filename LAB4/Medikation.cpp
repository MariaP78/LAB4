#include <iostream>
#include "Medikation.h"
using namespace std;


Medikation::Medikation()
{
	//default konstruktor

	Name = "\0";
	Konzentration = 0;
	Menge = 0;
	Preis = 0;

}

Medikation::Medikation(string name, int konzentration, int menge, float preis)
{
	//konstruktor

	Name = name;
	Konzentration = konzentration;
	Menge = menge;
	Preis = preis;

}


string Medikation::get_Name()
{
	return Name;
}

int Medikation::get_Konzentration()
{
	return Konzentration;
}

int Medikation::get_Menge()
{
	return Menge;
}

float Medikation::get_Preis()
{
	return Preis;
}

void Medikation::set_Name(string name)
{
	Name = name;
}

void Medikation::set_Konzentration(int konzentration)
{
	Konzentration = konzentration;
}

void Medikation::set_Menge(int menge)
{
	Menge = menge;
}

void Medikation::set_Preis(float preis)
{
	Preis = preis;
}

void Medikation::zeigen()
{
	cout << "Name: " << Name << "Konzentration: " << Konzentration << "Menge: " << Menge << "Preis: " << Preis;
}

