#include "Header.h"
#include "RUSRobot.h"
#include "USARobot.h"

int main()
{
	RUSRobot *one = new RUSRobot;
	one->EnterRobot();
	one->OutRobot();
	USARobot *two = new USARobot;
	two->EnterRobot();
	two->OutRobot();
	system("pause");
}