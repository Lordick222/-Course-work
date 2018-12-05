#pragma once
#include "Tank.h"
class USATank :
	public Tank
{
public:
	USATank(std::string name = "",
		std::string power = "",
		std::string length = "",
		std::string gun = "",
		std::string caliber = "",
		std::string walk = "ground",
		std::string year = "",
		std::string kolvo = "",
		std::string weight = "",
		std::string mans = "",
		std::string contry = "USA"
	);

	USATank(const USATank &tank);


	void EnterTank();
	void OutTank();


	virtual ~USATank();
};

