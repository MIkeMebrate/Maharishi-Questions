//#include <iostream>
//using std::cout;
//using std::endl;
//
//int decodeArray(int a[], int len)
//{
//	int sign = 1, multi = 1, deference, result=0;
//	if (a[0] < 0)
//		sign = -1;
//	for (int i = 0; i < len-1; i++)
//	{
//		deference = a[i] - a[i + 1];
//		if (deference < 0)
//			deference *= -1;
//		
//		for (int j = i; j < len-2; j++)
//		{
//			multi *= 10;	
//		}
//
//		result= result + (deference* multi);
//		deference = 0, multi = 1;
//	}
//
//	return sign*result;
//}
//
//int main()
//{
//	int a[] = { 111, 115, 118, 127, 125 };
//	int size = sizeof(a) / sizeof(a[0]);
//	cout<< decodeArray(a, size);
//
//}