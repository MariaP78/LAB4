#include "Test.h"

//test hinfugen
void test_hinzufugen()
{
	ApothekeRepo a = ApothekeRepo();
	Medikation medi = Medikation("Parasinus", 400, 10, 9.5);
	a.hinzufugen(medi);
	a.med.at(0).zeigen();
}

//test loschen
void test_loschen()
{
	test_hinzufugen();
	ApothekeRepo b = ApothekeRepo();
	b.loschen("Parasinus",400);
	b.med.at(0).zeigen();
}

//test bearbeiten
void test_bearbeiten()
{
	test_hinzufugen();
	ApothekeRepo c = ApothekeRepo();
	c.bearbeiten("Parasinus", 400);
	c.med.at(0).zeigen();
}