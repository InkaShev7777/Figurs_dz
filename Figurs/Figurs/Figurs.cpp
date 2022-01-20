#include <iostream>
#include"Kvadrat.h"
#include"Romb.h"
#include"Kol_Figur.h"
int main()
{
	Krug kr;
	Kvadrat kv;
	Romb rm;
	Kol_Figur kol;
	kol.Add(kr);
	kol.Add(kv);
	kol.Add(rm);
	kol.Print();
}


