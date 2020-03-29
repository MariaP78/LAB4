#include "ApothekeController.h"
using namespace std;


ApothekeController::ApothekeController() {
	
}

void ApothekeController::meniu(int i, ApothekeRepo *repo, Medikation m)
{
	string n;
	int k, me,x;
	float p;
	Medikation* medi;
	switch (i) {
	case 0:
		cout << "Exit";
		break;

	case 1:
		cout << "Was fur ein Medikament wollen Sie hinzufugen?\n";
		cout << "Name: ";
		cin >> n;
		cout << "Konzentration: ";
		cin >> k;
		cout << "Menge: "; 
		cin >> me;
		cout << "Preis: ";
		cin >> p;
		medi = new Medikation(n, k, me, p);
		if (repo->existieren(*medi))
		{
			for (int i = 0; i < repo->med.size(); i++)
				if (repo->med.at(i).get_Name() == n && repo->med.at(i).get_Konzentration() == k) {
					repo->med.at(i).set_Menge(me);
					break;
				}

		}
		else
		{
			repo->hinzufugen(*medi);
			//repo->med.at(med.size()-1).zeigen();
			int pozitie = repo->med.size() - 1;
			repo->med.at(pozitie).zeigen();

			delete medi;
		}

		
		break;

	case 2:
		cout << "Was fur ein Medikament wollen Sie loschen?\n";
		cout << "Name: "; 
		cin >> n;
		cout << "Konzentration: ";
		cin >> k;
		repo->ApothekeRepo::loschen(n, k);
		break;

	case 3:
		cout << "Fur welchen Medikament wollen Sie Angebot?\n";
		cout << "Name: ";
		cin >> n;
		cout << "Konzentration: ";
		cin >> k;
		repo->ApothekeRepo::bearbeiten(n, k);
		break;

	case 4:
		cout << "Was fur ein Medikament wollen Sie?\n";//stringul
		repo->suchen_string(m);
		break;

	case 5:
		cout << "Welche soll die kleiste Menge sein?";
		cin >> x;
		repo->kleiner_als_menge(x);
		break;

	case 6:
		repo->sortieren_nach_Preis();
		break;

	case 7:
		repo->undo();
		break;

	case 8:
		repo->redo();
		break;

	default:
		cout << "Bitte wahlen Sie eine Andere Option!\n";
		break;
	}
}