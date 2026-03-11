#include <iostream>
#include "StringUtil.h"

int main()
{
	char Temp[100] = "Hello World";

	/*for (int i = 0; i < 100; ++i)
	{
		Temp[i] = 'A';
	}*/

	int StringLength = Length(Temp, 100);

	Replace(Temp, 100, 'e', 'f');

	Print(Temp, 100);

	int Index = IndexOf(Temp, 100, 'W');

	std::cout << Index << std::endl;
}