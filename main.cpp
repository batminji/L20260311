#include <iostream>

int main()
{
	int Size;
	std::cout << "숫자를 입력하세요 : ";
	std::cin >> Size;

	int* Numbers = new int[Size];

	for (int i = 0; i < Size; ++i)
	{
		Numbers[i] = i + 1;
	}

	for (int i = 0; i < Size; ++i)
	{
		std::cout << Numbers[i] << " ";
	}
	std::cout << std::endl;

	delete[] Numbers;

	return 0;
}