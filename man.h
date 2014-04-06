#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string>
#include <string.h>
#include <list>
using namespace std;

class Man
{
public:
	string FIO;
	int Quant_of_money;
	bool Oplata;
	Man(string Name, int Quant_of_money);
	~Man();
	void menu();
	void oplatit();
};

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
class City
{
	public:
	list<Street*> Streets;
	void add_Street();								// �������� �����
	void del_Street();								// ������� �����
	void print_info();								// ����������� �������� ����
	void chose();									// ����� �����
};


