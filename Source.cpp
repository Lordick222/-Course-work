#include "Client.h"


int main()
{
	int a = 0;
	bool flag = 0;
	RUSArmyFactory rus;
	USAArmyFactory usa;




	/*createFighter(rus);
	createFighter(usa);
	outFighter("RUS");
	outFighter("USA");*/




	std::cout << "Welcome in DataBase";
	while (1)
	{
		std::cout << "\n\n";
		menu();
		a = mistake(5);
		switch (a)
		{
		case 1:std::cout << "Complete!\n\n";
			break;
		case 2:
			while (1)
			{
				armymenu(); std::cout << "\t";
				a = mistake(4);
				switch (a)
				{
				case 1:
					technikmenu(); std::cout << "\t\t"; a = mistake(6); 	
					switch (a)
					{
					case 1: createArmorCar(rus); break;
					case 2: createFighter(rus); break;
					case 3: createHowitzer(rus); break;
					case 4: createRobot(rus); break;
					case 5: createTank(rus); break;
					case 6:flag = 1; break;
					}
					if (flag)
					{
						flag = 0;
						break;
					}
				case 2:
					technikmenu(); std::cout << "\t\t"; a = mistake(6);
					switch (a)
					{
					case 1: outArmorCar("RUS"); break;
					case 2: outFighter("RUS"); break;
					case 3: outHowitzer("RUS"); break;
					case 4: outRobot("RUS"); break;
					case 5: outTank("RUS"); break;
					case 6:flag = 1; break;
					}
					if (flag)
					{
						flag = 0;
						break;
					}
				case 3:
					technikmenu(); std::cout << "\t\t"; a = mistake(6);
					switch (a)
					{
					case 1: delArmorCar("RUS"); break;
					case 2: delFighter("RUS"); break;
					case 3: delHowitzer("RUS"); break;
					case 4: delRobot("RUS"); break;
					case 5: delTank("RUS"); break;
					case 6:flag = 1; break;
					}
					if (flag)
					{
						flag = 0;
						break;
					}break;
				case 4:flag = 1; break;
				}
				if (flag)
				{
					flag = 0;
					break;
				}
			}
			break;
		case 3:
			while (1)
			{
				armymenu(); std::cout << "\t";
				a = mistake(4);
				switch (a)
				{
				case 1:
					technikmenu(); std::cout << "\t\t"; a = mistake(6);
					switch (a)
					{
					case 1: createArmorCar(usa); break;
					case 2: createFighter(usa); break;
					case 3: createHowitzer(usa); break;
					case 4: createRobot(usa); break;
					case 5: createTank(usa); break;
					case 6:flag = 1; break;
					}
					if (flag)
					{
						flag = 0;
						break;
					}
				case 2:
					technikmenu(); std::cout << "\t\t"; a = mistake(6);
					switch (a)
					{
					case 1: outArmorCar("USA"); break;
					case 2: outFighter("USA"); break;
					case 3: outHowitzer("USA"); break;
					case 4: outRobot("USA"); break;
					case 5: outTank("USA"); break;
					case 6:flag = 1; break;
					}
					if (flag)
					{
						flag = 0;
						break;
					}
				case 3:
					technikmenu(); std::cout << "\t\t"; a = mistake(6);
					switch (a)
					{
					case 1: delArmorCar("USA"); break;
					case 2: delFighter("USA"); break;
					case 3: delHowitzer("USA"); break;
					case 4: delRobot("USA"); break;
					case 5: delTank("USA"); break;
					case 6:flag = 1; break;
					}
					if (flag)
					{
						flag = 0;
						break;
					}break;
				case 4:flag = 1; break;
				}
				if (flag)
				{
					flag = 0;
					break;
				}
			}
			break;
		case 4:std::cout << "Complete!\n\n";
			break;
		case 5:flag = 1;break;
		}
		if (flag)break;
	}
	system("pause");
}