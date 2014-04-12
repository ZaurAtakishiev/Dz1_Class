#include "man.h"
#pragma once

class House
{
public:
	string Name_house;
	list< Man* > Men;
	House( string Name );
	~House();
	void menu();
	void add_man();
	void del_man();
	void print_info();
	void chose_man();
};