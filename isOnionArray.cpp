//#include <iostream>
//using std::cout;
//using std::endl;
//
//int isOnionArray(int a[], int len)
//{
//    int k = len-1;
//    for (int i = 0; i < len / 2; i++)
//    {
//        if ((a[i] + a[k]) > 10) return 0;
//        k--;
//    }
//    return 1;
//}
//int main()
//{
//    int a[] = { 1, 2, 3, 4, 15 };
//    int len = sizeof(a) / sizeof(a[0]);
//
//    cout << isOnionArray(a, len);
//}