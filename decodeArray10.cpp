//#include <iostream>
//using std::cout;
//using std::endl;
//
//int decodeArray(int a[], int len) {
//	int sign =1, c = 0, count = 0, length = 0, sum = 0, temp = 1;
//	if (a[0] == -1) {
//		sign = -1;
//		c = 1;
//	}
//	for(c = 0; c<len; c++){
//	    if (a[c] == 1) length++;
//	}
//	c = 0;
//	while(c < len){
//		if (a[c] == 0) { count++;
//			if (a[c + 1] == 1) {
//				for (int i = 1; i < length; i++) temp *= 10;
//				count *= temp;
//				temp = 1;
//				length--;
//				sum += count;
//				count = 0;
//			}
//		}
//		else if (a[c] == 1 && a[c - 1] != 0) {
//			for (int i = 1; i < length; i++) temp *= 10;
//			count *= temp;
//			temp = 1;
//			length--;
//			sum += count;
//			count = 0;
//		}
//		c++;
//	}
//	return sign*sum;
//}
//
//int main() {
//	int a[] = { 0, 1, 1, 1, 1, 1, 0, 1 };
//	int b[] = { -1, 0, 1 };
//	int size = sizeof(b) / sizeof(b[0]);
//    cout <<	decodeArray(b, size);
//}
