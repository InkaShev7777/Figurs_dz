#include <iostream>
#include"Kvadrat.h"
#include"Romb.h"
#include"Kol_Figur.h"
using namespace std;
int main()
{
	Krug* kr = new Krug;
	Kvadrat* kv = new Kvadrat;
	Romb* rm = new Romb;
	Kol_Figur kol;
	int vibor;
	int v;
	do
	{
		cout << "\t\tMenu\n";
		cout << "1 - Add figur\n";
		cout << "2 - Show\n";
		cout << "0 - Exit\n";
		cout << "Vash vibor: ";
		cin >> vibor;
		switch (vibor)
		{
		case 1:
			system("cls");
			cout << "1 - Add Krug\n";
			cout << "2 - Add Kvadrat\n";
			cout << "3 - Add Romb\n";
			cout << "Vash vibor: ";
			cin >> v;
			if (v == 1)
				kol.Add(kr);
			if (v == 2)
				kol.Add(kv);
			if (v == 3)
				kol.Add(rm);
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			kol.Show();
			system("pause");
			system("cls");
			break;
		}
	} while (vibor != 0);
	
}


