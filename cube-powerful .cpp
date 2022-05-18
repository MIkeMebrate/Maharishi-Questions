//#include<iostream>
//using std::cout;
//using std::endl;
//
//int isCubePowerful(int n)
//{
//	int original = n;
//	int temp, sum = 0;
//	if (n < 1) return 0;
//	while (n>0)
//	{
//		temp = n % 10;
//		n = n / 10;
//		temp = temp * temp * temp;
//		sum += temp;
//		temp = 0;
//	}
//
//	if (original == sum) return 1;
//	else return 0;
//}
//int main()
//{
//	cout << isCubePowerful(153) << endl;
//	cout << isCubePowerful(370) << endl;
//	cout << isCubePowerful(371) << endl;
//	cout << isCubePowerful(407) << endl;
//	cout << isCubePowerful(87) << endl;
//	cout << isCubePowerful(0) << endl;
//	cout << isCubePowerful(-81);
//	return 0;
//}