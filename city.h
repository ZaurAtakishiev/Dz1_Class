#include "man.h"
#include "street.h"
#pragma once
class City
{
	public:
	list<Street*> Streets;
	void add_Street();								// добавить улицу
	void del_Street();								// удалить улицу
	void print_info();								// распечатать названия улиц
	void chose();									// выбор улицы
};