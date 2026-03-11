#include <iostream>

int main()
{
	int Size;
	int* Numbers = nullptr;
	std::cout << "숫자를 입력하세요 : ";
	std::cin >> Size;

	Numbers = new int[Size];

	if (!Numbers)
	{
		return -1;
	}

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
	Numbers = nullptr;

	return 0;
}