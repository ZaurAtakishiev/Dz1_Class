#include "man.h"
#include "house.h"
#pragma once

class Street
{
public:
	string Name_street;
	list< House* > Houses;
	Street(string Name);
	~Street();
	void menu();									// меню
	void add_house();								// добавить дом
	void del_house();								// удалить дом
	void print_info();								// распечатать информацию о доме
	void chose_house();								// выбрать дом
};