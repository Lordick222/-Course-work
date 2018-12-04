#include "Header.h"
#include "RUSFighter.h"
#include "USAFighter.h"

int main()
{
	RUSFighter *one = new RUSFighter;
	one->EnterFighter();
	one->OutFighter();
	USAFighter *two = new USAFighter;
	two->EnterFighter();
	two->OutFighter();
	system("pause");
}