#include "man.h"
#include "street.h"
#pragma once
class City
{
	public:
	list<Street*> Streets;
	void add_Street();								// �������� �����
	void del_Street();								// ������� �����
	void print_info();								// ����������� �������� ����
	void chose();									// ����� �����
};