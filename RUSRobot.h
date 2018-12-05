#pragma once
#include "Robot.h"
class RUSRobot :
	public Robot
{
public:
	RUSRobot(std::string name = "",
		std::string power = "",
		std::string gun = "",
		std::string walk = "ground",
		std::string caliber = "",
		std::string year = "",
		std::string kolvo = "",
		std::string weight = "",
		std::string mans = "",
		std::string country = "RUS");

	RUSRobot(const RUSRobot &tank);

	void EnterRobot();
	void OutRobot();
	virtual ~RUSRobot();
};

