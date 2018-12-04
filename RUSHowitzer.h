#pragma once
#include "Howitzer.h"
class RUSHowitzer :
	public Howitzer
{
public:
	RUSHowitzer(std::string name = "",
		std::string power = "",
		std::string gun = "",
		std::string caliber = "",
		std::string walk = "ground",
		std::string year = "",
		std::string kolvo = "",
		std::string weight = "",
		std::string mans = "");

	RUSHowitzer(const RUSHowitzer &tank);


	void EnterHowitzer();
	void OutHowitzer();
	virtual ~RUSHowitzer();
};

