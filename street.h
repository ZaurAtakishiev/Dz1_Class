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
	void menu();									// ����
	void add_house();								// �������� ���
	void del_house();								// ������� ���
	void print_info();								// ����������� ���������� � ����
	void chose_house();								// ������� ���
};