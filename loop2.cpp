#include <iostream>

int main()
{
	int i;
	int j;
	int result = 0;

	std::cout << "insert the number :\n";
	std::cin >> i;

	for (int j = 1; j <= i; j++)
	{
		result = result + j;

	}
	std::cout << "add from 1 to " << i << "is " << result;
}