#include "ApothekeController.h"



ApothekeController::ApothekeController() {
	
}


void ApothekeController::sortieren_nach_Name()
{
	auto relation = [](Medikation a, Medikation b) { return a.get_Name() < b.get_Name(); };
		sort(med.begin(), med.end(), relation);          
}

void ApothekeController::suchen_string(Medikation m)
{
	string s;
	cin >> s;
	sortieren_nach_Name();
	bool ok = false;
	for (int i = 0; i < med.size(); i++)
	{
		int found = -1;
		found = m.get_Name.find(s);
		if (found != -1)
		{
			ok = true;
			m.zeigen();
		}
	}
	if (ok == false)
	{
		for (int i = 0; i < med.size(); i++)
			if (m.get_Menge != 0)
				m.zeigen();
	}

}

void ApothekeController::kleiner_als_menge(Medikation m,int menge)
{
	for (int i = 0; i < med.size(); i++)
	{
		if (m.get_Menge < menge)
			m.zeigen();
	}
}

void ApothekeController::sortieren_nach_Preis(Medikation m)
{
		auto relation = [](Medikation a, Medikation b) { return a.get_Preis() < b.get_Preis(); };
		sort(med.begin(), med.end(), relation);

	for (int i = 0; i < med.size(); i++)
		m.zeigen();

	//cout << "Preis: ";
	//cin >> pr;
	//for (int i = 0; i < med.size(); i++)
		//if (to_string(pr) == med[i][3])
			//cout << med[i][0] << ", " << med[i][1]; // nume+ conc

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
		if(!(repo->existieren(*medi)))
			repo->ApothekeRepo::hinzufugen(*medi);
		else

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
		ApothekeController::suchen_string(m);
		break;

	case 5:
		cout << "Welche soll die kleiste Menge sein?";
		cin >> x;
		ApothekeController::kleiner_als_menge(m, x);
		break;

	case 6:
		ApothekeController::sortieren_nach_Preis(m);
		break;

	case 7:
		m.zeigen();
		break;

	default:
		cout << "Bitte wahlen Sie eine Andere Option!\n";
		break;
	}
}