#pragma once
#include "Figura.h"
class Kvadrat :
    public Figura
{
protected:
    int size;
public:
	Kvadrat()
	{
		this->size = 4;
		this->x = 2;
		this->y = 4;
		this->name = "Kvadrat";
	}
	void print()
	{
		this->Print_Baz();
		std::cout << this->size;
	}
};

