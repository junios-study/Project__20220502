#include <iostream>

using namespace std;



int main()
{
	char Inventory[20] = { 0,  };

	int Count = sizeof(Inventory) / sizeof(char);

	for (int Index = 0; Index < Count; ++Index)
	{
		Inventory[Index] = Index + 1;
	}

	for (int Index = 0; Index < Count; ++Index)
	{
		cout << Inventory[Index] << endl;
	}





	return 0;
}