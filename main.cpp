#include <iostream>

using namespace std;

int main()
{
	int Score = 0;
	cin >> Score;
	char Grade = 'F';

	if (Score >= 90 && Score <= 100)
	{
		Grade = 'A';
	}
	else if (Score >= 80 && Score < 90)
	{
		Grade = 'B';
	}
	else if (Score >= 70 && Score < 80)
	{
		Grade = 'C';
	}
	else if (Score >= 60 && Score < 70)
	{
		Grade = 'D';
	}
	else if (Score >=0 && Score < 60)
	{
		Grade = 'F';
	}
	else
	{
		cout << "Error" << endl;
		return -1;
	}

	cout << "Grade : " << Grade << endl;

	return 0;
}