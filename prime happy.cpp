//#include <iostream>
//using std::cout;
//using std::endl;
//
//int isPrimeHappy(int n)
//{
//	int org = n, temp = 0, i = 3, SumPrime = 2;
//	if (n < 3) return 0;
//
//	for (int i = 3; i < n; i += 2)
//	{
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0) {
//				temp = 0;
//				break;
//			}
//			else temp = i;
//		}
//		SumPrime += temp;
//	}
//	if (SumPrime % org == 0) return 1;
//	else return 0;
//}
//
//int main()
//{
//	cout << isPrimeHappy(5) << endl;
//	cout << isPrimeHappy(25) << endl;
//	cout << isPrimeHappy(32) << endl;
//	cout << isPrimeHappy(8) << endl;
//	cout << isPrimeHappy(2) << endl;
//}