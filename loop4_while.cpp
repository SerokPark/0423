#include <iostream>

int main()
{
	int i = 1;
	int result = 0;

	while (true)
	{
		if (i == 0)
			break;
		std::cout << "insert the number(exit=0) : ";
		std::cin >> i;
		result = result + i;
		std::cout << "\n";
		i = i;

	}

	std::cout << "total sum of insert numbers is " << result;

}