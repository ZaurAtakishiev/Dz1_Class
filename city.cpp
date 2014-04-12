#include "man.h"
#include "city.h"
#include "house.h"
#include "street.h"

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
	print_info();
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
	print_info();
	cout<<"Input number: "<<endl;
	cin>>Number;
	for(i=1; i<Number; i++)
	{
		it ++;
	}
	street = *it;
	street->menu();
}