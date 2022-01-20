#pragma once
#include<iostream>
#include"Figura.h"
#include"Krug.h"
struct Node
{
	Node* next;
	Figura name;	
};
class Kol_Figur
{
	Node* head;
public:
	Kol_Figur()
	{
		this->head = nullptr;
	}
	void Add(Figura figura)
	{
		Node* tmp = this->head;
		if (tmp != nullptr)
		{
			while (tmp->next !=nullptr)
			{
				tmp = tmp->next;
			}
			tmp->next = new Node;
			tmp->next->name = figura;
			tmp->next->next = nullptr;
		}
		else
		{

			tmp = new Node;
			tmp->name = figura;
			tmp->next = nullptr;
			this->head = tmp;
		}
	}
	void Print()
	{
		Node* tmp = this->head;
		while (tmp != nullptr)
		{
			std::cout <<tmp<<" Next: "<<tmp->next<<" "<<tmp->name<<"\n";
			tmp = tmp->next;
		}
	}

};

