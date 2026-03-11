#include "StringUtil.h"
#include <iostream>

void Print(char* String, int Size)
{
	for (int i = 0; i < Size; ++i)
	{
		if (String[i] == '\0')
		{
			break;
		}
		std::cout << String[i];
	}
	std::cout << std::endl;
}


int Length(char* String, int Size)
{
	// 버퍼 오버 플로우 방지
	// 배열을 처리하는 함수는 반드시 크기를 받아야 한다.

	for (int i = 0; i < Size; ++i)
	{
		if (String[i] == '\0')
		{
			return i;
		}
	}

	return Size;
}

void Replace(char* String, int Size, char FindCharacter, char ReplaceCharacter)
{
	for (int i = 0; i < Size; ++i)
	{
		if (String[i] == FindCharacter)
		{
			String[i] = ReplaceCharacter;
		}
	}
}

int IndexOf(char* String, int Size, char FindCharacter)
{
	for (int i = 0; i < Size; ++i)
	{
		if (String[i] == FindCharacter)
		{
			return i;
		}
	}

	return -1;
}
