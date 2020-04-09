#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB4/ApothekeRepo.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace LAB4_TEST
{
	ApothekeRepo* test;

	TEST_CLASS(ApothekeRepo_TEST)
	{
	public:

		TEST_METHOD(ConstructorTest)
		{
		}

		
		TEST_METHOD(bearbeitenTest)
		{
			//auto  med = new Medikation("Nurofen", 70, 200, 25.00);
			//test->ApothekeRepo::bearbeiten("Nurofen", 70);
			//Assert::AreEqual(50.00, med->get_Preis());
		}
		

		TEST_METHOD(existierenTest)
		{
			//Medikation* medikation = new Medikation("Nurofen", 70, 200, 25.50);
			//Assert::AreEqual(true, test->ApothekeRepo::existieren(*medikation));
		}
	};
}