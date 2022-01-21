#pragma once
#include<iostream>
#include"Figura.h"
#include"Krug.h"
struct Node
{
	Node* next;
	Figura* name;	
	Node(){}
	Node(Figura* figura,Node* next)
	{
		this->name = figura;
		this->next = NULL;
	}
};
class Kol_Figur
{
	Node* head;
public:
	Kol_Figur()
	{
		this->head = nullptr;
	}
	void Add(Figura* figura)
	{
		if (this->head == nullptr)
		{
			this->head = new Node(figura, nullptr);
		}
		else
		{
			Node* tmp = this->head;
			while (tmp->next != nullptr)
			{
				tmp = tmp->next;
			}
			tmp->next = new  Node(figura, nullptr);
		}
	}
	virtual void Show()
	{
		Node* tmp = this->head;
		while (tmp != nullptr)
		{
			std::cout << "This address: " << tmp << "\t";
			tmp->name->print();
			std::cout << "Next address: " << tmp->next << "\t";
			std::cout << "\n";
			tmp = tmp->next;
		}
	}
};

