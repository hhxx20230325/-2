#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int add(int x, int y) {
//	return x + y;
//}
//int main() {//函数指针！！！
//	printf("%p\n",add);
//	int (*p1)(int,int) = add;
//	printf("%p\n",p1);
//	return 0;
//}



//void BubbleSort(int arr[],int sz) {
//	//...
//}
////qsort -可以排序任意类型的数据
//int main() {
//	//冒泡排序数组
//	//冒泡排序函数只能排序整形数组
//	int arr[] = {1,3,5,7,9,2,4,6,8,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr,sz);
//	return 0;
//}



//回调函数
//void print(char * str) {
//	printf("%s\n",str);
//}
//void test(void (*p)(char*)) {
//	printf("test\n");
//	p("123");
//}
//int main() {
//	test(print);
//	return 0;
//}




//int add(int x, int y) {
//	return x + y;
//}
//int main() {//指针指向函数指针数组
//	int arr[10] = {0};
//	int(*p)[10] = &arr;//取出数组的地址
//
//	int(*pf)(int, int);//函数指针
//	int(*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组
//	//ppfArr是一个指向[函数指针数组]的指针
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr是一个数组指针，指针指向的数组有4个元素
//	//指向数组的每个元素的类型是一个函数指针 int(*)(int,int)
//
//	return 0;
//}



//计算机(加减乘除)
//void menu() {
//	printf("********计算机********\n");
//	printf("**** 1.add  2.sub ****\n");
//	printf("**** 3.mul  4.div ****\n");
//	printf("****    0.exit    ****\n");
//	printf("**********************\n");
//}
//int add(int x,int y) {
//	return x + y;
//}
//int sub(int x,int y) {
//	return x - y;
//}
//int mul(int x,int y) {
//	return x * y;
//}
//int div(int x,int y) {
//	return x / y;
//}

//void Calc(int (*pf)(int,int)) {
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数:");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x,y));
//}
//
//int main() {//使用函数指针方式 
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			Calc(add);
//			break;
//		case 2:
//			Calc(sub);
//			break;
//		case 3:
//			Calc(mul);
//			break;
//		case 4:
//			Calc(div);
//			break;
//		default:break;
//		}
//	} while (input);
//	return 0;
//}



//int main() {//函数指针数组方式
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr是一个函数指针数组
//	int(*pfArr[])(int, int) = {0,add,sub,mul,div};
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d",&input);
//		if (input>=1&&input<=4) {
//			printf("请输入两个操作数:");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input==0)
//		{
//			printf("退出...\n");
//		}
//		else
//		{
//			printf("选择错误！！！");
//		}
//	} while (input);
//	return 0;
//}



//int main() {//最普通的方式
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d",&input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个数:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", add(x, y)); break;
//		case 2:
//			printf("请输入两个数:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y)); break;
//		case 3:
//			printf("请输入两个数:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y)); break;
//		case 4:
//			printf("请输入两个数:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", div(x, y)); break;
//		default:break;
//		}
//	} while (input);
//	return 0;
//}






//char* my_strcpy(char* dest, const char* src) {
//	dest = src;
//	return dest;
//}
//int main() {
//	char* a = '0';
//	char* b = '1';
//	//1.函数指针
//	//char (*p1)(char*,const char*) = my_strcpy;
//	//printf("%c\n",p1(a,b));
//	//1.函数指针数组
//	char* (*p2[4])(char*,const char*) = { my_strcpy ,my_strcpy ,my_strcpy ,my_strcpy };
//	int i = 0;
//	for (i = 0; i < 4;i++) {
//		printf("%c\n", *p2[i](a,b));
//	}
//	return 0;
//}



//int add(int a, int b) {
//		return a + b;
//}
//int sub(int a, int b) {
//		return a - b;
//}
//int mul(int a, int b) {
//		return a * b;
//}
//int div(int a, int b) {
//		return a / b;
//}
//int main() {
//	//指针数组
//	//int* p[5];
//	//需要一个数组，这个数组可以存放4个函数的地址  - 函数指针的数组
//	int(*pa)(int,int) = add;//sub,mul,div
//	int(*parr[4])(int, int) = {add,sub,mul,div};//函数指针数组
//	int i = 0;
//	for (i = 0; i < 4;i++) {
//		printf("%d\n", parr[i](2, 1));
//	}
//	return 0;
//}



//int add(int a,int b) {
//	return a + b;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = add;
//	printf("%d\n",(pa)(a,b));//30
//	printf("%d\n",(*pa)(a,b));//30  -> *属于摆设
//	return 0;
//}



//代码1
//(*(void (*)())0)();//把0强制转换为：void(*)()函数指针类型 -0就是一个函数的地址
					 //调用0在地址处的函数

//代码2
//void(*signal(int,void(*)(int)) )(int);
//signal是一个函数声明
//signal函数的参数有2个，第一个是int，第二个是函数指针，该函数指向的函数的参数是int，返回类型是void
//signal函数的返回类型也是一个函数指针，该函数指针指向的参数是int，返回类型是void

