#include <iostream>

using namespace std;

int main()
{
	int Sum = 0;
	for (int i = 1; i <= 100; i += 2)
	{
		Sum += i;
	}

	cout << Sum << endl;

	Sum = 0;
	for (int i = 2; i <= 100; i += 2)
	{
		Sum += i;
	}

	cout << Sum << endl;



	return 0;
}