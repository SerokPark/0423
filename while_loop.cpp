#include <iostream>

int main()
{
	int i;
	int j = 0;
	std::cout << "insert the number : \n";
	std::cin >> i;

	int result = 0;

	while (j <= i)
	{
		result = result + j;
		j++;
		}

	std::cout << "Add from 1 to " << i << "is " << result;
}