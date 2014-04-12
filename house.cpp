#include "man.h"
#include "city.h"
#include "house.h"
#include "street.h"


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
	unsigned int Number;
	int i;
	list< Man* >::iterator it = Men.begin();
	print_info();
	cout<<"Input number: "<<endl;
	cin>>Number;
	if( ( Number > 0) && ( Number <= Men.size() ) )
	{
		for(i = 1; i < Number; i++)
		{
			it ++;
		}
		Men.erase(it);
		cout<<"Deleted successfully!"<<endl;
	}
	else
	{
		cout<<"Error!"<<endl;
	}
}
void House::print_info()
{
	list< Man* >::iterator it = Men.begin();
	for(unsigned int i=0; i<Men.size(); ++i, ++it)
	{
		Man* Man_TMP = *it;
		char* result = Man_TMP->Oplata ? "true" : "false";
		cout<<i + 1<<"\t"<<Man_TMP->FIO<<"\t"<<Man_TMP->Quant_of_money<<"\t"<< result <<endl;  
	}
}
void House::chose_man()
{
	unsigned int Number;
	list< Man* >::iterator it = Men.begin();
	print_info();
	cout<<"Input number: "<<endl;
	cin>>Number;
	if( ( Number > 0 ) && ( Number < Men.size() ) )
	{
		list< Man* >::iterator man = Men.begin();
		std::advance( man, Number-1 );
		(*man)->menu();
	}
	else
	{
		cout<<"Error!"<<endl;
	}
}
void House::menu()
{
	int Input;
	bool isExit;
	do
	{
		cout<<"House: "<<Name_house<<endl;
		cout<<"1:Add\n2:Del\n3:Info\n4:Chose\n5:Up\nInput: "<<endl;
		cin>>Input;
		switch (Input)
		{
			case 1:		add_man();
						isExit = 1;
						break;
			case 2:		del_man();
						isExit = 1;
						break;
			case 3:		print_info();
						isExit = 1;
						break;
			case 4:		chose_man();
						isExit = 1;
						break;

			case 5:		isExit = 0;
						break;
			default:	isExit = 1;
						cout<<"Error!"<<endl;
						break;
		}
	}while(isExit);
}