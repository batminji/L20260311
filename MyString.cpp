#include <iostream>

int Length(const char* Sentence)
{
	int Length = 0;

	while (Sentence[Length] != '\0')
	{
		++Length;
	}

	return Length;
}

void Replace(char* Sentence, const char TargetChar, const char ReplaceChar, int Length)
{
	for (int i = 0; i < Length; ++i)
	{
		if (Sentence[i] == TargetChar)
		{
			Sentence[i] = ReplaceChar;
		}
	}
}

int Search(const char* Sentence, const char SearchChar, int Length)
{
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
	int Cnt = Length(Sentence);
	std::cout << Sentence << "의 문자열 길이 : " << Cnt << std::endl << std::endl;
	
	// 문자열 중에서 특정 문자를 특정 문자로 바꾸기
	std::cout << "바꾸기 전 문자열 : " << Sentence << std::endl;
	Replace(Sentence, 'P', 'C', Cnt);
	std::cout << "바꾼 후 문자열 : " << Sentence << std::endl << std::endl;

	// 문자열 중에서 특정 문자 위치를 찾기
	std::cout << "찾으려는 문자를 입력하세요 : ";
	char FoundChar;
	std::cin >> FoundChar;

	int Index = Search(Sentence, FoundChar, Cnt);
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