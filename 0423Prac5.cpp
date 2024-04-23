#include <iostream>
#include <vector>
#include <string>

int main()
{
	int num;
	std::cout << "insert the number :";
	std::cin >> num;
	char result;

	num % 5 == 0 ? std::cout << num <<"는 5의 배수입니다." : std::cout << num << "는 5의 배수가 아니네요 ㅜㅜ.";

	

}