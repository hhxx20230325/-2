#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//指针题目
//int main() {
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
//	//  %d: -4  -不会就画图！！！
//	//  %p: -00000000000000000000000000000100
//	//         11111111111111111111111111111011
//	//         11111111111111111111111111111100
//	//         0xfffffffc
//	return 0;
//}


//int main() {//逗号表达式 -括号内只算右边的
//	int a[3][2] = { (0,1) ,(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d\n",p[0]);//1
//	return 0;
//}




//int main() {
//	int a[4] = {1,2,3,4};
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a+1);
//	printf("%x,%x", ptr1[-1],*ptr2);
//	return 0;
//}







//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	char sBa[4];
//}*p;
////假设p的值为0x100000，如下表达式的值分别为多少"
////已知，结构体Test类型的变量大小是20个字节
//int main() {
//	printf("%p\n",p+0x1);//加了20,16进制
//	printf("%p\n",(unsigned long)p+0x1);//整体加一 
//	printf("%p\n",(unsigned int*)p+0x1);//
//	return 0;
//}




//int main() {//&后加1，就是整个数组后面的那个未知数组(即跳过了整个数组)
//	int a[] = {1,2,3,4,5};
//	int* ptr = (int*)(&a+1);
//	printf("%d,%d\n",*(a+1),*(ptr-1));//2 5
//	return 0;
//}







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

	//char arr[] = "abcdefg";
//	printf("%d\n", sizeof(arr));//8 -数组的大小
//	printf("%d\n", sizeof(arr + 0));//8 -地址的大小
//	printf("%d\n", sizeof(*arr));//1 -*arr是首元素
//	printf("%d\n", sizeof(arr[1]));//1 -第二个元素
//	printf("%d\n", sizeof(&arr));//8 -首元素地址
//	printf("%d\n", sizeof(&arr + 1));//8 -跳过整个数组后的地址
//	printf("%d\n", sizeof(&arr[0] + 1));//8 -第二个元素地址

	//printf("%d\n", strlen(arr));//7
	//printf("%d\n",strlen(arr+0));//7
	//printf("%d\n",strlen(*arr));//err
	//printf("%d\n",strlen(arr[1]));//err
//	printf("%d\n",strlen(&arr));//6
//	printf("%d\n",strlen(&arr+1));//随机值
//	printf("%d\n",strlen(&arr[0]+1));//5

	//char* p = "abcdef";
	//printf("%d\n",sizeof(p));//8 -指针变量p的大小
	//printf("%d\n",sizeof(p+1));//8 -字符b的地址
	//printf("%d\n",sizeof(*p));//1 -字符a
	//printf("%d\n",sizeof(p[0]));//1 -字符a
	//printf("%d\n",sizeof(&p));//8
	//printf("%d\n",sizeof(&p+1));//8
	//printf("%d\n",sizeof(&p[0]+1));//8

	//printf("%d\n",strlen(p));//6
	//printf("%d\n",strlen(p+1));//5
	//printf("%d\n",strlen(*p));//err
	//printf("%d\n",strlen(p[0]+1));//err
	//printf("%d\n",strlen(&p));//随机值
	//printf("%d\n",strlen(&p+1));//随机值
	//printf("%d\n",strlen(&p[0]+1));//随机值


//	int a[3][4] = { 0 };
//	printf("%d\n",sizeof(a));//48
//	printf("%d\n",sizeof(a[0][0]));//4
//	printf("%d\n",sizeof(a[0]));//16
//	printf("%d\n",sizeof(a[0]+1));//8 -地址，第一行第二个地址
//	printf("%d\n",sizeof(*a[0]+1));//4 -是第一行第二个元素
//	printf("%d\n",sizeof(a+1));//8 -第二行的地址
//	printf("%d\n",sizeof(*(a+1)));//16 -第二行的大小
//	printf("%d\n",sizeof(&a[0]+1));//8 -第一行第二个元素的地址
//	printf("%d\n",sizeof(*(&a[0]+1)));//16 -第二行的地址
//	printf("%d\n",sizeof(*a));//16 -第一行
//	printf("%d\n",sizeof(a[3]));//16 -不会访问第四行，但根据类型得出大小
//	return 0;
//}