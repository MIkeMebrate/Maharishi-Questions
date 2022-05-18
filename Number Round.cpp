//#include <iostream>
//using std::cout;
//using std::endl;
//using std::string;
//
//
//void doIntegerBasedRounding(int a[], int n, int len) {
//	int temp, temp2=n;
//	for (int i = 0; i < len; i++) {
//		if (a[i] == n || a[i] < 0 || n < 0)
//			continue;
//		else if (a[i] > n) {
//			while (a[i] > temp2 && a[i] > (temp2 + n))
//			{
//				temp2 += n;
//			}
//			if (a[i] < (temp2 +n)) {
//				int temp3;
//				temp = (temp2 + n) - a[i];
//				temp3 = a[i] - temp2;
//				if (temp3 <= temp) a[i] = temp2;
//				else a[i] = temp2+n;
//			}
//		}
//		else {
//			temp = n / a[i];
//			if (temp >= 2 ) {
//				temp = 0;
//				a[i] = temp;
//			}
//			else {
//				temp *= n;
//				a[i] = temp;
//			}
//			temp = 0;
//		}
//	}
//		for (int j = 0; j < len; j++)
//		{
//			cout << a[j] << "\t";
//		}
//}
//
//int main()
//{
//
//	int a[] = {1,2,3,4,5};
//	int len = sizeof(a) / sizeof(a[0]);
//	int round = 4;
//
//	doIntegerBasedRounding(a, round, len);
//	return 0;
//}