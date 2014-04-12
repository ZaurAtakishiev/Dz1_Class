#include "man.h"
#include "city.h"
#include "house.h"
#include "street.h"

Man::Man(string Name, int i_Quant_of_money) : FIO(Name), Quant_of_money(i_Quant_of_money), Oplata(false)
{}

void Man::oplatit()
{
	Oplata = !Oplata;
}

void Man::menu()
{
	int Input;
	bool isExit = true;
	while (isExit)
	{
		cout<<"Man: "<<FIO<<endl;
		cout<<"1:Oplata\n2:Up\nInput: "<<endl;
		cin>>Input;
		switch (Input)
		{
			case 1:		oplatit();
						isExit = true;
						break;
			case 2:		isExit = false;
						break;
			default:	isExit = true;
						cout<<"Error!"<<endl;
						break;
		}
	}
}