#include <iostream>
#include <vector>
#include <string>

int main()
{
	int i;
	int j;

	for (int i = 1; i <= 9; i++)
	{
		std::cout << i << "´Ü\n";
		for (int j = 1; j <= 9; j++)
		{
			std::cout << i << "*" << j <<"="<< i * j << "\n";

		}
		std::cout << "\n";
	}
}