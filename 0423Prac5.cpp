#include <iostream>
#include <vector>
#include <string>

int main()
{
	int num;
	std::cout << "insert the number :";
	std::cin >> num;
	char result;

	num % 5 == 0 ? std::cout << num <<"�� 5�� ����Դϴ�." : std::cout << num << "�� 5�� ����� �ƴϳ׿� �̤�.";

	

}