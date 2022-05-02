#include <iostream>

using namespace std;

int main()
{
	int Score = 0;
	cin >> Score;
	char Grade = 'F';

	switch (Score/10)
	{
		case 10:
		case 9:
			Grade = 'A';
			break;
		case 8:
			Grade = 'B';
			break;
		case 7:
			Grade = 'C';
			break;
		case 6:
			Grade = 'D';
			break;
		default:
			Grade = 'F';
	}


	cout << "Grade : " << Grade << endl;

	return 0;
}