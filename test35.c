#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//qsort-库函数 quick sort
#include<string.h>
//int main() {
	//整形数组
	//数组名是首元素的地址
	//1.sizeof(数组名) -数组名表示整个数组
	//2.&数组名 -数组名表示整个数组
	// 整形数组
	//int a[] = {1,2,3,4};
	//printf("%d\n",sizeof(a));//16 --数组总大小
	//printf("%d\n",sizeof(a+0));//8 --数组名是首元素地址
	//printf("%d\n",sizeof(*a));//4 --首元素地址，*a是首元素
	//printf("%d\n",sizeof(a+1));//8 -第二个元素地址
	//printf("%d\n",sizeof(a[1]));//4 -第二个元素的字节大小
	//printf("%d\n",sizeof(&a));//8 -&a取出的是数组的地址
	//printf("%d\n",sizeof(*&a));//16 -数组总大小
	//printf("%d\n",sizeof(&a+1));//8
	//printf("%d\n",sizeof(&a[0]));//8
	//printf("%d\n",sizeof(&a[0]+1));//8

	//字符数组
	//char arr[] = {'a','b','c','d','e','f'};
	//printf("%d\n",sizeof(arr));//6
	//printf("%d\n",sizeof(arr+0));//8
	//printf("%d\n",sizeof(*arr));//1
	//printf("%d\n",sizeof(arr[1]));//1
	//printf("%d\n",sizeof(&arr));//8
	//printf("%d\n",sizeof(&arr+1));//8
	//printf("%d\n",sizeof(&arr[0]+1));//8

	//printf("%d\n",strlen(arr));//随机值，/0的长度不确定
	//printf("%d\n",strlen(arr+0));//随机值
	//printf("%d\n",strlen(*arr));//err
	//printf("%d\n",strlen(arr[1]));//err
	//printf("%d\n",strlen(&arr));//随机值
	//printf("%d\n",strlen(&arr+1));//随机值-6
	//printf("%d\n",strlen(&arr[0]+1));//随机值-1

	//return 0;
//}




//void cmp_int(void*e1,void *e2) {
//	return *(int*)e1 - *(int*)e2;
//}
//int main() {
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d  ",arr[i]);
//	}
//	return 0;
//}

//回调函数的应用
//struct stu
//{
//	char name[20];
//	int age;
//};
////void qsort(void* base,size_t num,size_t width,int(*cmp)(const void*e1,const void*e2));//在库函数中
//int cmp_int(const void*e1,const void*e2) {
//	return *(int*)e1 - *(int*)e2;
//}
//int cmp_float(const void*e1,const void*e2) {
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//int cmp_struct(const void*e1,const void*e2) {
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void Swap(char* buf1,char* buf2,int width) {
//	int i = 0;
//	for (i = 0; i < width; i++) {
//		char a = *buf2;
//		*buf2 = *buf1;
//		*buf1 = a;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(int*base,int sz,int width,int(*cmp)(void*e1,void*e2)) {//最简单的冒泡排序
//	int i = 0;
//	for (i = 0; i < sz-1;i++) {
//		int j = 0;
//		for (int j = 0; j < sz-i-1; j++)
//		{
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0) {
//				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
//			}
//		}
//	}
//}
//void test1() {//整形比较qsort
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//第一个参数:待排序数组的首元素地址
//	//二:待排序数组的元素个数
//	//三:待排序数组每个元素的大小，单位为字节
//	//四:是函数指针，比较俩个元素的地址
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//void test2() {//浮点数进行比较qsort
//	float f[] = {9.0,8.0,7.0,6.0,5.0};
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f,sz,sizeof(f[0]),cmp_float);
//	for (int i = 0; i < sz; i++) {
//		printf("%f ", f[i]);
//	}
//}
//void test3() {
//	struct stu s[] = { {"zhangsan",20},{"lisi",18},{"wangwu",19} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s,sz,sizeof(s[0]),cmp_struct);
//	for (int i = 0; i < sz; i++) {
//		printf("%s %d   ", s[i].name,s[i].age);
//	}
//}
//void test4() {
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//int main() {//void* 类型的指针 可以接受任意类型的地址，但不能进行任意操作
//	test1();
//	printf("\n");
//	test2();
//	printf("\n");
//	test3();
//	printf("\n");
//	test4();
//	return 0;
//}




//void bubble_sort(int*arr,int num) {//最简单的冒泡排序
//	int i = 0;
//	for (i = 0; i < num-1;i++) {
//		int j = 0;
//		for (int j = 0; j < num-i-1; j++)
//		{
//			if (*(arr+j) > *(arr + j+1)) {
//				int temp = *(arr + j + 1);
//				*(arr + j + 1) = *(arr +j);
//				*(arr + j) = temp;
//			}
//		}
//	}
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int main() {
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct stu s[3] = { {"zhangsan",20},{"lisi",18},{"wangwu",19}};
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz;i++) {
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}









//int add(int x,int y) {
//	return x + y;
//}
//int sub(int x,int y) {
//	return x - y;
//}
//int main() {
//指针数组
	//int* arr[10];
//数组指针
	//int(*pa)[10]=&arr;
//函数指针
	//int(*pAdd)(int ,int) = add;
	//int sum = pAdd(1,3);
//函数数组指针
	//int(*pArr[2])(int ,int) = {add,sub};
	/*int r1 = pArr[0](1,2);
	int r2 = pArr[1](1,2);
	printf("r1=%2d\nr2=%2d",r1,r2);*/
//指向函数数组指针的指针
	//int(*(*ppArr)[2])(int, int) = &pArr;
	//return 0;
//}