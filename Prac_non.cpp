#include <iostream>

using namespace std;

int main()
{
	string answer = "";
	int i;
	int j;
	int k;
	cout << "insert the number : \n";
	cin >> i;

	for (int j = 1; j <= i; j++)
	{
		answer.append(j, '*');
		cout << "\n";
		cout << answer;
		answer = "";
	}

	
}