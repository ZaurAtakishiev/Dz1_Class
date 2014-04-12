#pragma once

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

