#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int add(int x, int y) {
//	return x + y;
//}
//int main() {//����ָ�룡����
//	printf("%p\n",add);
//	int (*p1)(int,int) = add;
//	printf("%p\n",p1);
//	return 0;
//}



//void BubbleSort(int arr[],int sz) {
//	//...
//}
////qsort -���������������͵�����
//int main() {
//	//ð����������
//	//ð��������ֻ��������������
//	int arr[] = {1,3,5,7,9,2,4,6,8,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr,sz);
//	return 0;
//}



//�ص�����
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
//int main() {//ָ��ָ����ָ������
//	int arr[10] = {0};
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int(*pf)(int, int);//����ָ��
//	int(*pfArr[4])(int, int);//pfArr��һ������-����ָ�������
//	//ppfArr��һ��ָ��[����ָ������]��ָ��
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ�������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int,int)
//
//	return 0;
//}



//�����(�Ӽ��˳�)
//void menu() {
//	printf("********�����********\n");
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
//	printf("������������:");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x,y));
//}
//
//int main() {//ʹ�ú���ָ�뷽ʽ 
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:");
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



//int main() {//����ָ�����鷽ʽ
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr��һ������ָ������
//	int(*pfArr[])(int, int) = {0,add,sub,mul,div};
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d",&input);
//		if (input>=1&&input<=4) {
//			printf("����������������:");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input==0)
//		{
//			printf("�˳�...\n");
//		}
//		else
//		{
//			printf("ѡ����󣡣���");
//		}
//	} while (input);
//	return 0;
//}



//int main() {//����ͨ�ķ�ʽ
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d",&input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("������������:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", add(x, y)); break;
//		case 2:
//			printf("������������:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y)); break;
//		case 3:
//			printf("������������:");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y)); break;
//		case 4:
//			printf("������������:");
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
//	//1.����ָ��
//	//char (*p1)(char*,const char*) = my_strcpy;
//	//printf("%c\n",p1(a,b));
//	//1.����ָ������
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
//	//ָ������
//	//int* p[5];
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ  - ����ָ�������
//	int(*pa)(int,int) = add;//sub,mul,div
//	int(*parr[4])(int, int) = {add,sub,mul,div};//����ָ������
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
//	printf("%d\n",(*pa)(a,b));//30  -> *���ڰ���
//	return 0;
//}



//����1
//(*(void (*)())0)();//��0ǿ��ת��Ϊ��void(*)()����ָ������ -0����һ�������ĵ�ַ
					 //����0�ڵ�ַ���ĺ���

//����2
//void(*signal(int,void(*)(int)) )(int);
//signal��һ����������
//signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ĺ����Ĳ�����int������������void
//signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��Ĳ�����int������������void

