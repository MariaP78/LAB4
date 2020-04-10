#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB4/ApothekeRepo.h"
#include <cassert>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace LAB4_TEST
{
	

	TEST_CLASS(ApothekeRepo_TEST)
	{
	public:
		TEST_METHOD(ConstructorTest)
		{
		}
		TEST_METHOD(bearbeitenTest)
		{
			ApothekeRepo test;
			ApothekeRepo auxiliar;
			
			Medikation medik = Medikation("Nurofen", 70, 200, 25.00);
			test.hinzufugen(medik);
			test.bearbeiten("Nurofen", 70);
			Medikation med_modif;
			med_modif = Medikation("Nurofen", 70, 200, 50.00);
			auxiliar.hinzufugen(med_modif);
			assert(test == auxiliar);
		}
		

		TEST_METHOD(existierenTest)
		{
			ApothekeRepo test;
			Medikation medikation = Medikation("Nurofen", 70, 200, 25.50);
			test.hinzufugen(medikation);
			assert(test.existieren(medikation));
		}
	};
}