#pragma once
#include "Fighter.h"
class USAFighter :
	public Fighter
{
public:
public:
	USAFighter(std::string name = "",
		std::string power = "",
		std::string gun = "",
		std::string caliber = "",
		std::string walk = "air",
		std::string year = "",
		std::string kolvo = "",
		std::string weight = "",
		std::string mans = "",
		std::string contry = "USA");

	USAFighter(const USAFighter &Fighter);


	void EnterFighter();
	void OutFighter();
	virtual ~USAFighter();
};

