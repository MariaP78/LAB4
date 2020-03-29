#include "ApothekeController.h"

ApothekeController::ApothekeController() {

}

void ApothekeController::meniu(int i)
{


	switch (i) {
	case 0:
		cout << "Exit";
		break;
	case 1:
		cout << "Ce medicament doriti sa adaugam?\n";
		break;
	case 2:
		cout << "Ce medicament doriti sa stergem?\n";
		break;
	case 3:
		cout << "Care medicament sa il ieftinim?\n";
		break;
	case 4:
		cout << "Ce fel de medicament doriti?\n";
		break;
	default:
		cout << "Ca rugam sa alegeti alta optiune\n";
		break;
	}
}