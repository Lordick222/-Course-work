#pragma once
#include "ArmorCar.h"
class USAArmorCar :
	public ArmorCar
{
public:
	USAArmorCar(std::string name = "",
		std::string power = "",
		std::string length = "",
		std::string gun = "",
		std::string caliber = "",
		std::string walk = "ground",
		std::string year = "",
		std::string kolvo = "",
		std::string weight = "",
		std::string mans = "",
		std::string contry = "USA");

	USAArmorCar(const USAArmorCar &tank);


	void EnterArmorCar();
	void OutArmorCar();
	virtual ~USAArmorCar();
};

