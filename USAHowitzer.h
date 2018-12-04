#pragma once
#include "Howitzer.h"
class USAHowitzer :
	public Howitzer
{
public:
	USAHowitzer(std::string name = "",
		std::string power = "",
		std::string gun = "",
		std::string caliber = "",
		std::string walk = "ground",
		std::string year = "",
		std::string kolvo = "",
		std::string weight = "",
		std::string mans = "");

	USAHowitzer(const USAHowitzer &tank);


	void EnterHowitzer();
	void OutHowitzer();
	virtual ~USAHowitzer();
};

