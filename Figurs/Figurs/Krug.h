#pragma once
#include "Figura.h"
class Krug :
    public Figura
{
protected:
    int rad;
public:
	Krug()
	{
		this->rad = 8;
		this->x = 5;
		this->y = 2;
		this->name = "Krug";
	}
	virtual void print()
	{
		Figura::print();
		std::cout <<"Radius: "<< this->rad<<"\tName: "<<this->name<<"\t";
	}
};

