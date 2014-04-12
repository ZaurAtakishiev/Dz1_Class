#include "man.h"
#include "city.h"
#include "house.h"
#include "street.h"

void main()
{
	int Input;
	bool Temp_Variable;
	City CITY;
	do
	{
		cout<<"Main menu:"<<endl;
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

