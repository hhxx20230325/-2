#include<stdio.h>
#include<windows.h>
//int main() {
//	printf("123\n");
//	Sleep(1000);
//	printf("234");
//	return 0;
//}
//int main() {
//	int a[] = {1,3,2,4,6,7,8,5};
//	printf("%p\n",a);
//	printf("%p\n",a+1);
//	printf("%p\n",&a[0]);
//	printf("%p\n",&a[1]);
//	printf("%p\n",&a);
//	printf("%p\n",&a+1);
//	return 0;
//}




//int sort(int a[],int len) {//用函数对数组进行冒泡排序
//	int x = 0;
//	for (int i = 0; i < len;i++) {
//		for (int j = 0; j < len - 1 - i;j++) {
//			if (a[j]>a[j+1]) {
//				x = a[j + 1];
//				a[j + 1] = a[j];
//				a[j] = x;
//			}
//		}
//	}
//	return a;
//}
//int main() {
//	int arr[] = {1,3,2,5,4,8,6,7};
//	int len = sizeof(arr) / sizeof(int);
//	sort(arr,len);
//	for (int i = 0; i < 8;i++) {
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}





//int main() {
//	/*int arr[3][4] = {1,2,3,4};*/
//	int arr2[3][4] = { {1,2,3,4},{3,4} };
//	for (int i = 0; i < 3;i++) {
//		for (int j = 0; j < 4;j++) {
//			printf("%d ",arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}