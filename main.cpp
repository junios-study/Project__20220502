#include <iostream>

using namespace std;

int main()
{
	int Count = 0;
	cin >> Count;

	for (int j = 1; j <= Count; ++j)
	{
		for (int i = 1; i <= j; ++i)
		{
			cout << '*';
		}
		cout << '\n';
	}



	return 0;
}