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
	std::string read;
	std::ifstream in("F:\\”чеба\\3 курс 1 сем тп лаба\\Veselkov Ч копи€ Ч копи€ (2)\\myfile3.txt");
	in >> sizeRobot;
	in >> sizeArmorCar;
	in >> sizeFighter;
	in >> sizeTank;
	in >> sizeHowitzer;
	std::getline(in, read);
	tank = (Tank**)realloc(tank, (sizeTank+1) * sizeof(Tank));
	robot = (Robot**)realloc(robot, (sizeRobot+1) * sizeof(Robot));
	armorcar = (ArmorCar**)realloc(armorcar, (sizeArmorCar+1) * sizeof(ArmorCar));
	fighter = (Fighter**)realloc(fighter, (sizeFighter+1) * sizeof(Fighter));
	howitzer = (Howitzer**)realloc(howitzer, (sizeHowitzer+1) * sizeof(Howitzer));
	RUSArmyFactory rus;
	USAArmyFactory usa;
	for (int i = 1; i < sizeTank+1; i++)
	{
		std::getline(in, read);
		if (read == "RUS")
		{
			tank[i] = rus.createTank();
			tank[i]->set_Country(read);
			std::getline(in, read);
			tank[i]->set_Name(read);
			std::getline(in, read);
			tank[i]->set_Power(read);
			std::getline(in, read);
			tank[i]->set_Length(read);
			std::getline(in, read);
			tank[i]->set_Gun(read);
			std::getline(in, read);
			tank[i]->set_Caliber(read);
			std::getline(in, read);
			tank[i]->set_Year(read);
			std::getline(in, read);
			tank[i]->set_Kolvo(read);
			std::getline(in, read);
			tank[i]->set_Weight(read);
			std::getline(in, read);
			tank[i]->set_Mans(read);
			std::getline(in, read);
			tank[i]->set_Walk(read);
		}
		else
		{
			tank[i] = usa.createTank();
			tank[i]->set_Country(read);
			std::getline(in, read);
			tank[i]->set_Name(read);
			std::getline(in, read);
			tank[i]->set_Power(read);
			std::getline(in, read);
			tank[i]->set_Length(read);
			std::getline(in, read);
			tank[i]->set_Gun(read);
			std::getline(in, read);
			tank[i]->set_Caliber(read);
			std::getline(in, read);
			tank[i]->set_Year(read);
			std::getline(in, read);
			tank[i]->set_Kolvo(read);
			std::getline(in, read);
			tank[i]->set_Weight(read);
			std::getline(in, read);
			tank[i]->set_Mans(read);
			std::getline(in, read);
			tank[i]->set_Walk(read);
		}
		
	}
	for (int i = 1; i < sizeRobot + 1; i++)
	{
		std::getline(in, read);
		if (read == "RUS")
		{
			robot[i] = rus.createRobot();
			robot[i]->set_Country(read);
			std::getline(in, read);
			robot[i]->set_Name(read);
			std::getline(in, read);
			robot[i]->set_Power(read);
			std::getline(in, read);
			robot[i]->set_Gun(read);
			std::getline(in, read);
			robot[i]->set_Caliber(read);
			std::getline(in, read);
			robot[i]->set_Year(read);
			std::getline(in, read);
			robot[i]->set_Kolvo(read);
			std::getline(in, read);
			robot[i]->set_Weight(read);
			std::getline(in, read);
			robot[i]->set_Mans(read);
			std::getline(in, read);
			robot[i]->set_Walk(read);
		}
		else
		{
			robot[i] = usa.createRobot();
			robot[i]->set_Country(read);
			std::getline(in, read);
			robot[i]->set_Name(read);
			std::getline(in, read);
			robot[i]->set_Power(read);
			std::getline(in, read);
			robot[i]->set_Gun(read);
			std::getline(in, read);
			robot[i]->set_Caliber(read);
			std::getline(in, read);
			robot[i]->set_Year(read);
			std::getline(in, read);
			robot[i]->set_Kolvo(read);
			std::getline(in, read);
			robot[i]->set_Weight(read);
			std::getline(in, read);
			robot[i]->set_Mans(read);
			std::getline(in, read);
			robot[i]->set_Walk(read);
		}

	}
	for (int i = 1; i < sizeArmorCar + 1; i++)
	{
		std::getline(in, read);
		if (read == "RUS")
		{
			armorcar[i] = rus.createArmorCar();
			armorcar[i]->set_Country(read);
			std::getline(in, read);
			armorcar[i]->set_Name(read);
			std::getline(in, read);
			armorcar[i]->set_Power(read);
			std::getline(in, read);
			armorcar[i]->set_Length(read);
			std::getline(in, read);
			armorcar[i]->set_Gun(read);
			std::getline(in, read);
			armorcar[i]->set_Caliber(read);
			std::getline(in, read);
			armorcar[i]->set_Year(read);
			std::getline(in, read);
			armorcar[i]->set_Kolvo(read);
			std::getline(in, read);
			armorcar[i]->set_Weight(read);
			std::getline(in, read);
			armorcar[i]->set_Mans(read);
			std::getline(in, read);
			armorcar[i]->set_Walk(read);
		}
		else
		{
			armorcar[i] = usa.createArmorCar();
			armorcar[i]->set_Country(read);
			std::getline(in, read);
			armorcar[i]->set_Name(read);
			std::getline(in, read);
			armorcar[i]->set_Power(read);
			std::getline(in, read);
			armorcar[i]->set_Length(read);
			std::getline(in, read);
			armorcar[i]->set_Gun(read);
			std::getline(in, read);
			armorcar[i]->set_Caliber(read);
			std::getline(in, read);
			armorcar[i]->set_Year(read);
			std::getline(in, read);
			armorcar[i]->set_Kolvo(read);
			std::getline(in, read);
			armorcar[i]->set_Weight(read);
			std::getline(in, read);
			armorcar[i]->set_Mans(read);
			std::getline(in, read);
			armorcar[i]->set_Walk(read);
		}

	}
	for (int i = 1; i < sizeFighter + 1; i++)
	{
		std::getline(in, read);
		if (read == "RUS")
		{
			fighter[i] = rus.createFighter();
			fighter[i]->set_Country(read);
			std::getline(in, read);
			fighter[i]->set_Name(read);
			std::getline(in, read);
			fighter[i]->set_Power(read);
			std::getline(in, read);
			fighter[i]->set_Gun(read);
			std::getline(in, read);
			fighter[i]->set_Caliber(read);
			std::getline(in, read);
			fighter[i]->set_Year(read);
			std::getline(in, read);
			fighter[i]->set_Kolvo(read);
			std::getline(in, read);
			fighter[i]->set_Weight(read);
			std::getline(in, read);
			fighter[i]->set_Mans(read);
			std::getline(in, read);
			fighter[i]->set_Walk(read);
		}
		else
		{
			fighter[i] = usa.createFighter();
			fighter[i]->set_Country(read);
			std::getline(in, read);
			fighter[i]->set_Name(read);
			std::getline(in, read);
			fighter[i]->set_Power(read);
			std::getline(in, read);
			fighter[i]->set_Gun(read);
			std::getline(in, read);
			fighter[i]->set_Caliber(read);
			std::getline(in, read);
			fighter[i]->set_Year(read);
			std::getline(in, read);
			fighter[i]->set_Kolvo(read);
			std::getline(in, read);
			fighter[i]->set_Weight(read);
			std::getline(in, read);
			fighter[i]->set_Mans(read);
			std::getline(in, read);
			fighter[i]->set_Walk(read);
		}
	}
	for (int i = 1; i < sizeHowitzer + 1; i++)
	{
		std::getline(in, read);
		if (read == "RUS")
		{
			howitzer[i] = rus.createHowitzer();
			howitzer[i]->set_Country(read);
			std::getline(in, read);
			howitzer[i]->set_Name(read);
			std::getline(in, read);
			howitzer[i]->set_Power(read);
			std::getline(in, read);
			howitzer[i]->set_Gun(read);
			std::getline(in, read);
			howitzer[i]->set_Caliber(read);
			std::getline(in, read);
			howitzer[i]->set_Year(read);
			std::getline(in, read);
			howitzer[i]->set_Kolvo(read);
			std::getline(in, read);
			howitzer[i]->set_Weight(read);
			std::getline(in, read);
			howitzer[i]->set_Mans(read);
			std::getline(in, read);
			howitzer[i]->set_Walk(read);
		}
		else
		{
			howitzer[i] = usa.createHowitzer();
			howitzer[i]->set_Country(read);
			std::getline(in, read);
			howitzer[i]->set_Name(read);
			std::getline(in, read);
			howitzer[i]->set_Power(read);
			std::getline(in, read);
			howitzer[i]->set_Gun(read);
			std::getline(in, read);
			howitzer[i]->set_Caliber(read);
			std::getline(in, read);
			howitzer[i]->set_Year(read);
			std::getline(in, read);
			howitzer[i]->set_Kolvo(read);
			std::getline(in, read);
			howitzer[i]->set_Weight(read);
			std::getline(in, read);
			howitzer[i]->set_Mans(read);
			std::getline(in, read);
			howitzer[i]->set_Walk(read);
		}

	}
	in.close();
}

void save()
{
	std::ofstream out("F:\\”чеба\\3 курс 1 сем тп лаба\\Veselkov Ч копи€ Ч копи€ (2)\\myfile3.txt");
	out << sizeRobot << "\n";
	out << sizeArmorCar << "\n";
	out << sizeFighter << "\n";
	out << sizeTank << "\n";
	out << sizeHowitzer << "\n";
	for (int i = 1; i < sizeTank + 1; i++)
	{
		out << tank[i]->getCountry() << "\n";
		out << tank[i]->getName() << "\n";
		out << tank[i]->getPower() << "\n";
		out << tank[i]->getLength() << "\n";
		out << tank[i]->getGun() << "\n";
		out << tank[i]->getCaliber() << "\n";
		out << tank[i]->getYear() << "\n";
		out << tank[i]->getKolvo() << "\n";
		out << tank[i]->getWeight() << "\n";
		out << tank[i]->getMans() << "\n";
		out << tank[i]->getWalk() << "\n";
	}
	for (int i = 1; i < sizeRobot + 1; i++)
	{
		out << robot[i]->getCountry() << "\n";
		out << robot[i]->getName() << "\n";
		out << robot[i]->getPower() << "\n";
		out << robot[i]->getGun() << "\n";
		out << robot[i]->getCaliber() << "\n";
		out << robot[i]->getYear() << "\n";
		out << robot[i]->getKolvo() << "\n";
		out << robot[i]->getWeight() << "\n";
		out << robot[i]->getMans() << "\n";
		out << robot[i]->getWalk() << "\n";
	}
	for (int i = 1; i < sizeArmorCar + 1; i++)
	{
		out << armorcar[i]->getCountry() << "\n";
		out << armorcar[i]->getName() << "\n";
		out << armorcar[i]->getPower() << "\n";
		out << armorcar[i]->getLength() << "\n";
		out << armorcar[i]->getGun() << "\n";
		out << armorcar[i]->getCaliber() << "\n";
		out << armorcar[i]->getYear() << "\n";
		out << armorcar[i]->getKolvo() << "\n";
		out << armorcar[i]->getWeight() << "\n";
		out << armorcar[i]->getMans() << "\n";
		out << armorcar[i]->getWalk() << "\n";
	}
	for (int i = 1; i < sizeFighter + 1; i++)
	{
		out << fighter[i]->getCountry() << "\n";
		out << fighter[i]->getName() << "\n";
		out << fighter[i]->getPower() << "\n";
		out << fighter[i]->getGun() << "\n";
		out << fighter[i]->getCaliber() << "\n";
		out << fighter[i]->getYear() << "\n";
		out << fighter[i]->getKolvo() << "\n";
		out << fighter[i]->getWeight() << "\n";
		out << fighter[i]->getMans() << "\n";
		out << fighter[i]->getWalk() << "\n";
	}
	for (int i = 1; i < sizeHowitzer + 1; i++)
	{
		out << howitzer[i]->getCountry() << "\n";
		out << howitzer[i]->getName() << "\n";
		out << howitzer[i]->getPower() << "\n";
		out << howitzer[i]->getGun() << "\n";
		out << howitzer[i]->getCaliber() << "\n";
		out << howitzer[i]->getYear() << "\n";
		out << howitzer[i]->getKolvo() << "\n";
		out << howitzer[i]->getWeight() << "\n";
		out << howitzer[i]->getMans() << "\n";
		out << howitzer[i]->getWalk() << "\n";
	}
	out.close();
}











int mistake(int a)
{
	int i = 0;
	while (1)
	{
		std::cin >> i;
		if (i == -1)
		{
			std::cin.ignore(32767, '\n');
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
			std::cin.ignore(32767, '\n');
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




