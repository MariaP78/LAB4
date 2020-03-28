#include <iostream>
#include "UI.h"

using namespace std;

UI::UI() {

}

void UI::Menu()
{
	//aici se face meniul din consola
	//Controller c;
	//Medikament med;

	int option;
	do {
		cout << "Main Menu:" << endl;
		cout << "1. Medikament hinzufugen" << endl;
		cout << "2. Medikament loschen" << endl;
		cout << "3. Medikament bearbeiten" << endl;
		cout << "4. Medikamente zeigen" << endl;
		cout << "5. Exit" << endl;
		cout << "Wahlen Sie bitte eine Option: "; cin >> option; cout << endl;

		//c.executa(option, &med);

	} while (option != 0);
}
