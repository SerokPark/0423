#include <iostream>
#include <vector>
#include <string>

int main()
{
	int a;
	int b;
	char Oper;
	std::cout << "insert num1 :";
	std::cin >> a;
	std::cout << "insert num2 :";
	std::cin >> b;
	std::cout << "insert Operator :";
	std::cin >> Oper;

	switch (Oper)
	{
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '/':
		return a / b;
	case '*':
		return a * b;
	default:
		return 0;

	
	}



}