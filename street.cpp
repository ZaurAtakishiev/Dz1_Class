#include "man.h"
#include "city.h"
#include "house.h"
#include "street.h"

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
	print_info();
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
	print_info();
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
		cout<<"Street "<<Name_street<<endl;
		cout<<"1:Add\n2:Del\n3:Info\n4:Chose\n5:Up\nInput: "<<endl;
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