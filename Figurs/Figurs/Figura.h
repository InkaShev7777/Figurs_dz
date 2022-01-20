#pragma once
#include<iostream>
class Figura
{
protected:
	int x;
	int y;
	std::string name;
	void Print_Baz()
	{
		std::cout << this->x << this->y;
	}
	friend std::ostream& operator<<(std::ostream& out, Figura& figura)
	{
		out << "  Cord X: " << figura.x << "  Cord Y: " << figura.y<<"  Name: "<<figura.name;
		return out;
	}
	
public:
	Figura()
	{
		this->x = 3;
		this->y = 5;
		this->name = "Figura";
	}
	
	
};

