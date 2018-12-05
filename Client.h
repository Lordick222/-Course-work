#pragma once
#include "ArmorCar.h"
#include "Fighter.h"
#include "Howitzer.h"
#include "Robot.h"
#include "Tank.h"
#include "Header.h"
#include "USAArmyFactory.h"
#include "RUSArmyFactory.h"
#include "ArmyFactory.h"


int sizeRobot = 0;
int sizeArmorCar = 0;
int sizeFighter = 0;
int sizeTank = 0;
int sizeHowitzer = 0;
Robot**robot = new Robot*;
ArmorCar**armorcar = new ArmorCar*;
Fighter**fighter = new Fighter*;
Tank**tank = new Tank*;
Howitzer**howitzer = new Howitzer*;

void load()
{
	std::ifstream in("F:\\”чеба\\3 курс 1 сем тп лаба\\Veselkov Ч копи€ Ч копи€ (2)\\myfile3.txt");
	in >> sizeRobot;
	in >> sizeArmorCar;
	in >> sizeFighter;
	in >> sizeTank;
	in >> sizeHowitzer;
	tank = (Tank**)realloc(tank, (sizeTank+1) * sizeof(Tank));
	robot = (Robot**)realloc(robot, (sizeRobot+1) * sizeof(Robot));
	armorcar = (ArmorCar**)realloc(armorcar, (sizeArmorCar+1) * sizeof(ArmorCar));
	fighter = (Fighter**)realloc(fighter, (sizeFighter+1) * sizeof(Fighter));
	howitzer = (Howitzer**)realloc(howitzer, (sizeHowitzer+1) * sizeof(Howitzer));
	for (int i = 1; i < sizeTank+1; i++)
	{
		tank[i] = new Tank;
		in.ignore(32767, '\n');
		std::getline(in, schet);
		student[i]->setfioo(schet);
		in >> ichet;
		student[i]->setgrupp(ichet);
		in.ignore(32767, '\n');
		std::getline(in, schet);
		student[i]->setspecialtyy(schet);
		in >> ichet;
		student[i]->setcoursee(ichet);
		in >> dchet;
		student[i]->setballl(dchet);
	}
	in.close();
}

void save()
{

}











int mistake(int a)
{
	int i = 0;
	while (1)
	{
		std::cin >> i;
		if (i == -1)
		{
			return i;
			break;
		}
		if ((std::cin.fail()) || (i<0) || (i>a))
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "\n\t\t\t\tUnknown\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return i;
			break;
		}
	}
}

int mistake_(int a)
{
	int i = 0;
	while (1)
	{
		std::cin >> i;
		if (i == -1)
		{
			return i;
			break;
		}
		if ((std::cin.fail()) || (i<1) || (i>a))
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "\n\t\t\t\tUnknown\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return i;
			break;
		}
	}
}


void createTank(ArmyFactory& factory)
{
	sizeTank++;
	tank = (Tank**)realloc(tank, (sizeTank) * sizeof(Tank));
	tank[sizeTank] = factory.createTank();
	tank[sizeTank]->EnterTank();

}

void outTank(std::string a)
{
	for (int i = 1; i < (sizeTank+1); i++)
	{
		if ((tank[i]->getCountry()) == a)
		{
			std::cout << "\n\t Number : |" << i << "|\n";
			tank[i]->OutTank();
		}
	}
}

void delTank(std::string b)
{
	std::cout << "\n\t\tNumber?\n\t\t";
	int a = 0;
	a = mistake_(sizeTank);
	if ((tank[a]->getCountry()) == b)
	{
		tank[a] = tank[sizeTank];
		sizeTank--;
		tank = (Tank**)realloc(tank, (sizeTank) * sizeof(Tank));
		if (a == -1)
		{
			std::cout << "\t\tOut\n\n";
		}
		else
		{
			std::cout << "\t\tComplete!\n\n";
		}
	}
	else
	{
		std::cout << "\t\tError!\n\n";
	}
}

void createRobot(ArmyFactory& factory)
{
	sizeRobot++;
	robot = (Robot**)realloc(robot, (sizeRobot) * sizeof(Robot));
	robot[sizeRobot] = factory.createRobot();
	robot[sizeRobot]->EnterRobot();

}

void outRobot(std::string a)
{
	for (int i = 1; i < (sizeRobot + 1); i++)
	{
		if ((robot[i]->getCountry()) == a)
		{
			std::cout << "\n\t Number : |" << i << "|\n";
			robot[i]->OutRobot();
		}
	}
}

void delRobot(std::string b)
{
	std::cout << "\n\t\tNumber?\n\t\t";
	int a = 0;
	a = mistake_(sizeRobot);
	if ((robot[a]->getCountry()) == b)
	{
		robot[a] = robot[sizeRobot];
		sizeRobot--;
		robot = (Robot**)realloc(robot, (sizeRobot) * sizeof(Robot));
		if (a == -1)
		{
			std::cout << "\t\tOut\n\n";
		}
		else
		{
			std::cout << "\t\tComplete!\n\n";
		}
	}
	else
	{
		std::cout << "\t\tError!\n\n";
	}
}


void createArmorCar(ArmyFactory& factory)
{
	sizeArmorCar++;
	armorcar = (ArmorCar**)realloc(armorcar, (sizeArmorCar) * sizeof(ArmorCar));
	armorcar[sizeArmorCar] = factory.createArmorCar();
	armorcar[sizeArmorCar]->EnterArmorCar();

}

void outArmorCar(std::string a)
{
	for (int i = 1; i < (sizeArmorCar + 1); i++)
	{
		if ((armorcar[i]->getCountry()) == a)
		{
			std::cout << "\n\t Number : |" << i << "|\n";
			armorcar[i]->OutArmorCar();
		}
	}
}

void delArmorCar(std::string b)
{
	std::cout << "\n\t\tNumber?\n\t\t";
	int a = 0;
	a = mistake_(sizeArmorCar);
	if ((armorcar[a]->getCountry()) == b)
	{
		armorcar[a] = armorcar[sizeArmorCar];
		sizeArmorCar--;
		armorcar = (ArmorCar**)realloc(armorcar, (sizeArmorCar) * sizeof(ArmorCar));
		if (a == -1)
		{
			std::cout << "\t\tOut\n\n";
		}
		else
		{
			std::cout << "\t\tComplete!\n\n";
		}
	}
	else
	{
		std::cout << "\t\tError!\n\n";
	}
}

void createFighter(ArmyFactory& factory)
{
	sizeFighter++;
	fighter = (Fighter**)realloc(fighter, (sizeFighter) * sizeof(Fighter));
	fighter[sizeFighter] = factory.createFighter();
	fighter[sizeFighter]->EnterFighter();

}

void outFighter(std::string a)
{
	for (int i = 1; i < (sizeFighter + 1); i++)
	{
		if ((fighter[i]->getCountry()) == a)
		{
			std::cout << "\n\t Number : |" << i << "|\n";
			fighter[i]->OutFighter();
		}
	}
}

void delFighter(std::string b)
{
	std::cout << "\n\t\tNumber?\n\t\t";
	int a = 0;
	a = mistake_(sizeFighter);
	if ((fighter[a]->getCountry()) == b)
	{
		fighter[a] = fighter[sizeFighter];
		sizeFighter--;
		fighter = (Fighter**)realloc(fighter, (sizeFighter) * sizeof(Fighter));
		if (a == -1)
		{
			std::cout << "\t\tOut\n\n";
		}
		else
		{
			std::cout << "\t\tComplete!\n\n";
		}
	}
	else
	{
		std::cout << "\t\tError!\n\n";
	}
}

void createHowitzer(ArmyFactory& factory)
{
	sizeHowitzer++;
	howitzer = (Howitzer**)realloc(howitzer, (sizeHowitzer) * sizeof(Howitzer));
	howitzer[sizeHowitzer] = factory.createHowitzer();
	howitzer[sizeHowitzer]->EnterHowitzer();

}

void outHowitzer(std::string a)
{
	for (int i = 1; i < (sizeHowitzer + 1); i++)
	{
		if ((howitzer[i]->getCountry()) == a)
		{
			std::cout << "\n\t Number : |" << i << "|\n";
			howitzer[i]->OutHowitzer();
		}
	}
}

void delHowitzer(std::string b)
{
	std::cout << "\n\t\tNumber?\n\t\t";
	int a = 0;
	a = mistake_(sizeHowitzer);
	if ((howitzer[a]->getCountry()) == b)
	{
		howitzer[a] = howitzer[sizeHowitzer];
		sizeHowitzer--;
		howitzer = (Howitzer**)realloc(howitzer, (sizeHowitzer) * sizeof(Howitzer));
		if (a == -1)
		{
			std::cout << "\t\tOut\n\n";
		}
		else
		{
			std::cout << "\t\tComplete!\n\n";
		}
	}
	else
	{
		std::cout << "\t\tError!\n\n";
	}
}




void menu()
{
	std::cout << "1>Load BD\n2>Russia\n3>USA\n4>SaveBD\n5>Go out\n\n";
}
void armymenu()
{
	std::cout << "\n\t1>ADD\n\t2>Write all\n\t3>Delete\n\t4>Go out\n\n";
}
void technikmenu()
{
	std::cout << "\n\t\t1>Armorcar\n\t\t2>Fighter\n\t\t3>Howitzer\n\t\t4>Robot\n\t\t5>Tank\n\t\t6>Go out\n\n";
}




