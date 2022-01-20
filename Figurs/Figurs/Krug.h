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
	/*friend std::ostream& operator<<(std::ostream& out, Krug& krug)
	{
		out << "Cord X: " << krug.x << "  Cord Y: " << krug.y << "  Rad: " << krug.rad;
		return out;
	}*/
	void print()
	{
		this->Print_Baz();
		std::cout << this->rad;
	}

};

