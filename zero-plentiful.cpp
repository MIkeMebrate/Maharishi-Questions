//#include <iostream>
//using std::cout;
//using std::endl;
//
//int iszeroplentiful(int a[], int len)
//{
//	int numzero = 0, found = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (a[i] == 0)
//		{
//			numzero++;
//			if (numzero >=4) {
//				found++;
//				numzero = 0;
//			}
//		}
//		else if (a[i] != a[i + 1]) numzero = 0;
//		else
//			continue;
//	}
//	return found;
//}
//int main()
//{
//	int a[] = { 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0 };
//	int len = sizeof(a) / sizeof(a[0]);
//
//	cout << iszeroplentiful(a, len);
//}