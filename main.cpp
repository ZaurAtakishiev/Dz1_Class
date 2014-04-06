#include "man.h"

Man::Man(string Name, int Quant_of_money)
{
	FIO = Name;
	Quant_of_money = Quant_of_money;
	Oplata = false;
}
void Man::oplatit()
{
	if(Oplata)
	{
		Oplata = false;
	}
	else
	{
		Oplata = true;
	}
}
void Man::menu()
{
	int Input;
	bool Temp_Variable;
	do
	{
		cout<<" 1: Oplata\n2:Up\nInput: "<<endl;
		cin>>Input;
		switch (Input)
		{
			case 1:		oplatit();
						Temp_Variable = 1;
						break;
			case 2:		Temp_Variable = 0;
						break;
			default:	Temp_Variable = 1;
						cout<<"Error!"<<endl;
						break;
		}
	}while(Temp_Variable);
}
House::House (string Name)
{
	Name_house = Name;
}
void House::add_man()
{
	Man* New_Man;
	string Name_Man;
	int Quant_of_money;
	cout<<"Input man's name: ";
	getchar();
	getline(std::cin, Name_Man);
	cout<<"Input Quant_of_money: "<<endl;
	cin>>Quant_of_money;
	New_Man = new Man(Name_Man, Quant_of_money);
	Men.push_back(New_Man);
}
void House::del_man()
{
	int Number;
	int i;
	list< Man* >::iterator it = Men.begin();
	cout<<"Input number: "<<endl;
	cin>>Number;
	for(i = 1; i < Number; i++)
	{
		it ++;
	}
	Men.erase(it);
	cout<<"Deleted successfully!"<<endl;
}
void House::print_info()
{
	int i; 
	int Var;
	Var = Men.size();
	Man* Man_TMP;
	list< Man* >::iterator it = Men.begin();
	for(i=0; i<Var; i++)
	{
		Man_TMP = *it;
		cout<<i<<"\t"<<Man_TMP->FIO<<"\t"<<Man_TMP->Quant_of_money<<"\t"<<Man_TMP->Oplata<<endl;
		it++;
	}
}
void House::chose_man()
{
	int Number;
	int i;
	Man *man;
	list< Man* >::iterator it = Men.begin();
	cout<<"Input number: "<<endl;
	cin>>Number;
	for(i=1; i<Number; i++)
	{
		it ++;
	}
	man = *it;
	man->menu();
}
void House::menu()
{
	int Input;
	bool Temp_Variable;
	do
	{
		cout<<" 1: Add\n2:Del\n3:Info\n4:Chose\n5:Up\nInput: "<<endl;
		cin>>Input;
		switch (Input)
		{
			case 1:		add_man();
						Temp_Variable = 1;
						break;
			case 2:		del_man();
						Temp_Variable = 1;
						break;
			case 3:		print_info();
						Temp_Variable = 1;
						break;
			case 4:		chose_man();
						Temp_Variable = 1;
						break;

			case 5:		Temp_Variable = 0;
						break;
			default:	Temp_Variable = 1;
						cout<<"Error!"<<endl;
						break;
		}
	}while(Temp_Variable);
}


Street::Street(string Name)
{
	Name_street = Name;
}
void Street::add_house()
{
	House* New_House;
	string Name_House;
	cout<<"Input house's number:"<<endl;
	getchar();
	getline(std::cin, Name_House);
	New_House = new House(Name_House);
	Houses.push_back(New_House);
}
void Street::del_house()
{
	int Number;
	int i;
	list< House* >::iterator it = Houses.begin();
	cout<<"Input number: "<<endl;
	cin>>Number;
	for(i=1; i<Number; i++)
	{
		it ++;
	}
	Houses.erase(it);
	cout<<"Deleted successfully!"<<endl;
}
void Street::print_info()
{
	int i; 
	int Var;
	Var = Houses.size();
	House* TMP_House;
	list< House* >::iterator it = Houses.begin();
	for(i=1; i<=Var; i++)
	{
		TMP_House = *it;
		cout<<i<<"\t"<<TMP_House->Name_house<<endl;
		it++;
	}
}
void Street::chose_house()
{
	int Number;
	int i;
	House *house;
	list< House* >::iterator it = Houses.begin();
	cout<<"Input number: "<<endl;
	cin>>Number;
	for(i=1; i<Number; i++)
	{
		it ++;
	}
	house = *it;
	house->menu();
}
void Street::menu()
{
	int Input;
	bool Temp_Variable;
	do
	{
		cout<<" 1: Add\n2:Del\n3:Info\n4:Chose\n5:Up\nInput: "<<endl;
		cin>>Input;
		switch (Input)
		{
			case 1:		add_house();
						Temp_Variable = 1;
						break;
			case 2:		del_house();
						Temp_Variable = 1;
						break;
			case 3:		print_info();
						Temp_Variable = 1;
						break;
			case 4:		chose_house();
						Temp_Variable = 1;
						break;

			case 5:		Temp_Variable = 0;
						break;
			default:	Temp_Variable = 1;
						cout<<"Error!"<<endl;
						break;
		}
	}while(Temp_Variable);
}


void City::add_Street()
{
	Street * New_Street;
	string Name_Street;
	cout<<"Input street's name: ";
	getchar();
	getline(std::cin, Name_Street);
	New_Street = new Street(Name_Street);
	Streets.push_back(New_Street);
}
void City::del_Street()
{
	int Number;
	int i;
	list< Street* >::iterator it = Streets.begin();
	cout<<"Input number: "<<endl;
	cin>>Number;
	for(i=1; i<Number; i++)
	{
		it ++;
	}
	Streets.erase(it);
	cout<<"Deleted successfully!"<<endl;
}
void City::print_info()
{
	int i; 
	int Var;
	Var = Streets.size();
	Street* TMP_Street;
	list< Street* >::iterator it = Streets.begin();
	for(i = 1; i <= Var; i++)
	{
		TMP_Street = *it;
		cout<<i<<"\t"<<TMP_Street->Name_street<<endl;
		it++;
	}
}
void City::chose()
{
	int Number;
	int i;
	Street *street;
	list< Street* >::iterator it = Streets.begin();
	cout<<"Input number: "<<endl;
	cin>>Number;
	for(i=1; i<Number; i++)
	{
		it ++;
	}
	street = *it;
	street->menu();
}


void main()
{
	int Input;
	bool Temp_Variable;
	City CITY;
	do
	{
		cout<<"1:Add\n2:Del\n3:Info\n4:Chose\n5:Up\nInput: "<<endl;
		cin>>Input;
		switch (Input)
		{
			case 1:		CITY.add_Street();
						Temp_Variable = 1;
						break;
			case 2:		CITY.del_Street();
						Temp_Variable = 1;
						
						break;
			case 3:		CITY.print_info();
						Temp_Variable = 1;
						break;
			case 4:		CITY.chose();
						Temp_Variable = 1;
						break;

			case 5:		Temp_Variable = 0;
						break;
			default:	Temp_Variable = 1;
						cout<<"Error!"<<endl;
						break;
		}
	}while(Temp_Variable);
}

