#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//ָ����Ŀ
//int main() {
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
//	//  %d: -4  -����ͻ�ͼ������
//	//  %p: -00000000000000000000000000000100
//	//         11111111111111111111111111111011
//	//         11111111111111111111111111111100
//	//         0xfffffffc
//	return 0;
//}


//int main() {//���ű��ʽ -������ֻ���ұߵ�
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
////����p��ֵΪ0x100000�����±��ʽ��ֵ�ֱ�Ϊ����"
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main() {
//	printf("%p\n",p+0x1);//����20,16����
//	printf("%p\n",(unsigned long)p+0x1);//�����һ 
//	printf("%p\n",(unsigned int*)p+0x1);//
//	return 0;
//}




//int main() {//&���1�������������������Ǹ�δ֪����(����������������)
//	int a[] = {1,2,3,4,5};
//	int* ptr = (int*)(&a+1);
//	printf("%d,%d\n",*(a+1),*(ptr-1));//2 5
//	return 0;
//}







//int main() {
	//��������
	//����������Ԫ�صĵ�ַ
	//1.sizeof(������) -��������ʾ��������
	//2.&������ -��������ʾ��������
	// ��������
	//int a[] = {1,2,3,4};
	//printf("%d\n",sizeof(a));//16 --�����ܴ�С
	//printf("%d\n",sizeof(a+0));//8 --����������Ԫ�ص�ַ
	//printf("%d\n",sizeof(*a));//4 --��Ԫ�ص�ַ��*a����Ԫ��
	//printf("%d\n",sizeof(a+1));//8 -�ڶ���Ԫ�ص�ַ
	//printf("%d\n",sizeof(a[1]));//4 -�ڶ���Ԫ�ص��ֽڴ�С
	//printf("%d\n",sizeof(&a));//8 -&aȡ����������ĵ�ַ
	//printf("%d\n",sizeof(*&a));//16 -�����ܴ�С
	//printf("%d\n",sizeof(&a+1));//8
	//printf("%d\n",sizeof(&a[0]));//8
	//printf("%d\n",sizeof(&a[0]+1));//8

	//�ַ�����
	//char arr[] = {'a','b','c','d','e','f'};
	//printf("%d\n",sizeof(arr));//6
	//printf("%d\n",sizeof(arr+0));//8
	//printf("%d\n",sizeof(*arr));//1
	//printf("%d\n",sizeof(arr[1]));//1
	//printf("%d\n",sizeof(&arr));//8
	//printf("%d\n",sizeof(&arr+1));//8
	//printf("%d\n",sizeof(&arr[0]+1));//8

	//printf("%d\n",strlen(arr));//���ֵ��/0�ĳ��Ȳ�ȷ��
	//printf("%d\n",strlen(arr+0));//���ֵ
	//printf("%d\n",strlen(*arr));//err
	//printf("%d\n",strlen(arr[1]));//err
	//printf("%d\n",strlen(&arr));//���ֵ
	//printf("%d\n",strlen(&arr+1));//���ֵ-6
	//printf("%d\n",strlen(&arr[0]+1));//���ֵ-1

	//char arr[] = "abcdefg";
//	printf("%d\n", sizeof(arr));//8 -����Ĵ�С
//	printf("%d\n", sizeof(arr + 0));//8 -��ַ�Ĵ�С
//	printf("%d\n", sizeof(*arr));//1 -*arr����Ԫ��
//	printf("%d\n", sizeof(arr[1]));//1 -�ڶ���Ԫ��
//	printf("%d\n", sizeof(&arr));//8 -��Ԫ�ص�ַ
//	printf("%d\n", sizeof(&arr + 1));//8 -�������������ĵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));//8 -�ڶ���Ԫ�ص�ַ

	//printf("%d\n", strlen(arr));//7
	//printf("%d\n",strlen(arr+0));//7
	//printf("%d\n",strlen(*arr));//err
	//printf("%d\n",strlen(arr[1]));//err
//	printf("%d\n",strlen(&arr));//6
//	printf("%d\n",strlen(&arr+1));//���ֵ
//	printf("%d\n",strlen(&arr[0]+1));//5

	//char* p = "abcdef";
	//printf("%d\n",sizeof(p));//8 -ָ�����p�Ĵ�С
	//printf("%d\n",sizeof(p+1));//8 -�ַ�b�ĵ�ַ
	//printf("%d\n",sizeof(*p));//1 -�ַ�a
	//printf("%d\n",sizeof(p[0]));//1 -�ַ�a
	//printf("%d\n",sizeof(&p));//8
	//printf("%d\n",sizeof(&p+1));//8
	//printf("%d\n",sizeof(&p[0]+1));//8

	//printf("%d\n",strlen(p));//6
	//printf("%d\n",strlen(p+1));//5
	//printf("%d\n",strlen(*p));//err
	//printf("%d\n",strlen(p[0]+1));//err
	//printf("%d\n",strlen(&p));//���ֵ
	//printf("%d\n",strlen(&p+1));//���ֵ
	//printf("%d\n",strlen(&p[0]+1));//���ֵ


//	int a[3][4] = { 0 };
//	printf("%d\n",sizeof(a));//48
//	printf("%d\n",sizeof(a[0][0]));//4
//	printf("%d\n",sizeof(a[0]));//16
//	printf("%d\n",sizeof(a[0]+1));//8 -��ַ����һ�еڶ�����ַ
//	printf("%d\n",sizeof(*a[0]+1));//4 -�ǵ�һ�еڶ���Ԫ��
//	printf("%d\n",sizeof(a+1));//8 -�ڶ��еĵ�ַ
//	printf("%d\n",sizeof(*(a+1)));//16 -�ڶ��еĴ�С
//	printf("%d\n",sizeof(&a[0]+1));//8 -��һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n",sizeof(*(&a[0]+1)));//16 -�ڶ��еĵ�ַ
//	printf("%d\n",sizeof(*a));//16 -��һ��
//	printf("%d\n",sizeof(a[3]));//16 -������ʵ����У����������͵ó���С
//	return 0;
//}