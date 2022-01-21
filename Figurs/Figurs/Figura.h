#pragma once
#include<iostream>
class Figura
{
protected:
	int x;
	int y;
	std::string name;
public:
	virtual void print()
	{
		std::cout <<"X: "<< this->x<<"\tY: " << this->y<<"\t";
	}
	Figura()
	{
		this->x = 3;
		this->y = 5;
		this->name = "Figura";
	}
};

