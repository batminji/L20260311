#include <iostream>

int CountLength(char* Sentence)
{
	int Length = 0;

	while (Sentence[Length] != '\0')
	{
		++Length;
	}

	return Length;
}

void Replace(char* Sentence, char TargetChar, char ReplaceChar, int Length)
{
	int Index = 0;
	
	/*while (Sentence[Index] != '\0')
	{
		if (Sentence[Index] == TargetChar)
		{
			Sentence[Index] = ReplaceChar;
		}
		++Index;
	}*/

	for (int i = 0; i < Length; ++i)
	{
		if (Sentence[i] == TargetChar)
		{
			Sentence[i] = ReplaceChar;
		}
	}
}

int Search(char* Sentence, char SearchChar, int Length)
{
	int Index = 0;

	/*while (Sentence[Index] != '\0')
	{
		if (Sentence[Index] == SearchChar)
		{
			return Index;
		}
		++Index;
	}*/

	for (int i = 0; i < Length; ++i)
	{
		if (Sentence[i] == SearchChar)
		{
			return i;
		}
	}

	return -1;
}

int main()
{
	char Sentence[10] = "CPlusPlus";

	// 문자열 개수 세기
	int Length = CountLength(Sentence);
	std::cout << Sentence << "의 문자열 길이 : " << Length << std::endl << std::endl;
	
	// 문자열 중에서 특정 문자를 특정 문자로 바꾸기
	std::cout << "바꾸기 전 문자열 : " << Sentence << std::endl;
	Replace(Sentence, 'P', 'C', Length);
	std::cout << "바꾼 후 문자열 : " << Sentence << std::endl << std::endl;

	// 문자열 중에서 특정 문자 위치를 찾기
	std::cout << "찾으려는 문자를 입력하세요 : ";
	char FoundChar;
	std::cin >> FoundChar;

	int Index = Search(Sentence, FoundChar, Length);
	if (Index != -1)
	{
		std::cout << FoundChar << "는 " << Index + 1 << "번 째에 있습니다.";
	}
	else
	{
		std::cout << "찾으려는 문자가 없습니다." << std::endl;
	}

	return 0;
}