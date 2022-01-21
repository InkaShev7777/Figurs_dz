#pragma once
#include "Figura.h"
class Romb :
    public Figura
{
protected:
    int st;
public:
	Romb()
	{
		this->st = 4;
		this->x = 6;
		this->y = 8;
		this->name = "Romb";
	}
	virtual void print()
	{
		Figura::print();
		std::cout <<"Storona: "<< this->st << "\tName: " << this->name << "\t";
	}
};

