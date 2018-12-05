#pragma once
#include "Fighter.h"
class RUSFighter :
	public Fighter
{
public:
	RUSFighter(std::string name = "",
		std::string power = "",
		std::string gun = "",
		std::string caliber = "",
		std::string walk = "air",
		std::string year = "",
		std::string kolvo = "",
		std::string weight = "",
		std::string mans = "",
		std::string country = "RUS");

	RUSFighter(const RUSFighter &Fighter);


	void EnterFighter();
	void OutFighter();
	virtual ~RUSFighter();
};

