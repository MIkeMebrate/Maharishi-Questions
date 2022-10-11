#include <iostream>
using std::cout;
using std::endl;

int isDigitIncreasing(int n)
{
	int count = 0;
	int org = n;
	int temp=0, result=0;
	while (n > 1)
	{
		n = n / 10;
		count++;
	}

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 0; j < count; j++)
		{

			temp = i + (temp * 10);
			result += temp;
		}
		if (result == org) return 1;
		else {
			result = 0;
			temp = 0;
			result = 0;
		}
	}

	return 0;
}
int main()
{
	cout << isDigitIncreasing(36) << endl;
	cout << isDigitIncreasing(984) << endl;
	cout << isDigitIncreasing(36) << endl;
	cout << isDigitIncreasing(7404) << endl;
}
