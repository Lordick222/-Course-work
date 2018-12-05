#pragma once
#include "ArmorCar.h"
class RUSArmorCar :
	public ArmorCar
{
public:
	RUSArmorCar(std::string name = "",
		std::string power = "",
		std::string length = "",
		std::string gun = "",
		std::string caliber = "",
		std::string walk = "ground",
		std::string year = "",
		std::string kolvo = "",
		std::string weight = "",
		std::string mans = "",
		std::string country = "RUS");

	RUSArmorCar(const RUSArmorCar &tank);


	void EnterArmorCar();
	void OutArmorCar();
	virtual ~RUSArmorCar();
};

