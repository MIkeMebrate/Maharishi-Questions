//#include <iostream>
//using std::cout;
//using std::endl;
//
//int* encodeArray(int n)
//{
//	int num, sign = 1, count=0;
//	int org = n;
//	int i = 0, j = 0;
//	if (n < 0) {
//		sign = -1; 
//		n *= sign;
//		org *= sign;
//	}
//	else if (n == 0) {
//		int* encodeArray = new int[2];
//		encodeArray[0] = 1;
//		encodeArray[1] = 2;
//	     return encodeArray;
//	}
//	while (n > 0){
//		num = n % 10;
//		n = n / 10;
//		for (int i = 0; i <= num; i++){
//			count++; }
//	}
//	if (sign == -1) { 
//		count++; }
//	int* encodeArray = new int[count+1];
//	i = count-1;
//	if (sign == -1) encodeArray[0] = -1;
//	while (org > 0) {
//		num = org % 10;
//		org = org / 10;
//		while (j <= num) {
//			if (j == 0) encodeArray[i] = 1;
//			else  encodeArray[i] = 0;
//			i--;
//			j++;
//		  }
//		j = 0;
//	}
//	encodeArray[count] = 2;
//	return encodeArray;
//}
//int main()
//{
//      int*a= encodeArray(101);
//
//	  int i = 0;
//	  while (a[i] != 2) {
//		  cout << a[i] << " ";
//		  i++;
//	   }
//}