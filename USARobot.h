#pragma once
#include "Robot.h"
class USARobot :
	public Robot
{
public:
	USARobot(std::string name = "",
		std::string power = "",
		std::string gun = "",
		std::string walk = "ground",
		std::string caliber = "",
		std::string year = "",
		std::string kolvo = "",
		std::string weight = "",
		std::string mans = "");

	USARobot(const USARobot &tank);

	void EnterRobot();
	void OutRobot();

	virtual ~USARobot();
};

