#include<stdio.h>



//����ָ��ĸ���

//void Print(char *str) {
//	printf("%s\n",str);
//}
//int main() {
//	void (*p)(char*) = Print;
//	(*p)("hello bit");
//	return 0;
//}




//����ָ��  -ָ�������ָ��
//����ָ��  -ֻ�뺯����ָ��

//int add(int x,int y) {
//	int z = 0;
//	z=x+y;
//	return z;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	//printf("%d\n",add(a,b));
//	//&�������ͺ��������Ǻ����ĵ�ַ
//	//printf("%p\n",add);
//	//printf("%p\n",&add);
//	int(*pa)(int, int) = add;
//	printf("%d\n",(*pa)(2,3));
//
//	return 0;
//}


//��ά���鴫��
//void test(int a[3][5]) {}
//void test(int a[][5]) {}
//void test(int a[3][]) {}--err
//void test(int *arr) {}-err
//void test(int **arr) {}-err
//void test1(int(*arr)[5]) {}
//int main() {
//	int arr[3][5] = { 0 };
//
//	test1(arr);
//
//	return 0;
//}


//void test(int arr[]) {}
//void test(int arr[10]) {}
//void test(int* arr) {}
//
//void test2(int *arr[20]) {}
//void test2(int **arr) {}
////���������ָ�����
//int main() {
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}




//void print1(int arr[3][5],int x,int y) {
//	for (int i = 0; i < x;i++) {
//		for (int j = 0; j < y;j++) {
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("*******print1ִ�н���******\n");
//}
//void print2(int (*p)[5],int x,int y) {
//	int i = 0;
//	for ( i = 0; i < x;i++) {
//		int j = 0;
//		for ( j = 0; j < y; j++)
//		{
//			//printf("%d  ",*(p[i]+j));
//			printf("%d  ",p[i][j]);
//			//printf("%d  ", *((*p+i)+j));
//			//printf("%d  ", (*p+i)[j]);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr,3,5);
//	print2(arr,3,5);
//
//	//int a[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int i = 0;
//	//int* p = a;
//	//for (i = 0; i < 10;i++) {
//	//	//printf("%d ",*(p+i));
//	//	//printf("%d ",*(a+i));
//	//	//printf("%d ",a[i]);
//	//	//printf("%d ",p[i]);//*(p+i)==*(a+i)=a[i]=p[i]
//	//}
//	return 0;
//}


//�������:����ָ�룬ָ�����������������
// int* p1;����ָ��
// char *p2;�ַ�ָ��
// int (*p3)[x];����ָ��
//int main() {//����ָ��ļ����
//	int a[10] = {1,2,3,4,5,6,7,8,9,10};
//	int(*p)[10] = &a;
//	for (int i = 0; i < 10;i++) {
//		printf("%d\n",(*p)[i]);
//	}
//	return 0;
//}





//int main() {
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	printf("%p\n",arr);
//	printf("%p\n",pa);
//
//	int arr2[5] = {0};
//	int(*pa2)[5] = &arr2;
//
//	return 0;
//} 





//����ָ��  -ָ��  --����ָ�룬ָ�������ָ�룬�������ĵ�ַ
//int main() {
//	int* p=NULL;//����ָ��  -ָ�����ε�ָ�룬���Դ�����εĵ�ַ
//	char* pc = NULL;//�ַ�ָ��  -ָ���ַ���ָ�룬���Դ���ַ��ĵ�ַ
//
//	int a[10] = 0;
//	//a ��Ԫ�ص�ַ
//	//&a[0] ��Ԫ�صĵ�ַ
//	//&arr -����ĵ�ַ
//
//	int a[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int* p[10] = &a;//ָ������  ->p�Ⱥ�[10]��һ��
//	int(* p)[10] = &a;//����ĵ�ַҪ������
//	//�����p��������ָ��
//	return 0;
//}






//ָ�������ʹ��
//int main() {//ͨ��ָ��ȥŪ�������޵�����
//	int a1[] = {1,2,3,4,5};
//	int a2[] = {2,2,3,4,5};
//	int a3[] = {3,2,3,4,5};
//	
//	int* p[] = {a1,a2,a3};
//
//	for (int i = 0; i < 3;i++) {
//		for (int j = 0; j < 5;j++) {
//			printf("%d  ",*p[i]+j);
//		}
//		printf("\n");
//	}
//	return 0;
//}





//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* p[4] = {&a,&b,&c,&d};
//	for (int i = 0; i < 4;i++) {
//		printf("%d\n",*p[i]);//���int
//		printf("%p\n",p[i]);//�����ַ
//	}
//	return 0;
//}





//ָ������
//int main(){
//	int arr[10] = { 0 };
//	char ch[5] = {0};
//	int* parr[4];
//	char* pch[5];
//
//	return 0;
//}





//int main() {//p1,p2Ϊ�����ַ��������ܱ��޸ģ�Ϊ�˽�ʡ�ռ䣬���Ե�ַ��ͬ
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	//char* p3 = arr1;
//
//	if (arr1 == arr2)printf("hehe\n");
//	else printf("haha\n");//haha
//	if (p1 == p2)printf("hehe\n");
//	else printf("haha\n");//hehe
//	return 0;
//}


//int main() {
//	/*char arr[] = "abcdefg";
//	char* pc = arr;
//	printf("%s\n",pc);
//	printf("%c\n",*pc);
//	printf("%c\n",*pc+2);*/
//
//	/*char* p = "abcdef";
//	printf("%s\n",p);*/
//
//	//const char* p = "abcdef";
//	////*p = 'w';//���ܸ�
//	//printf("%s\n",p);
//	return 0;
//}


//void test1(int a[]) {
//	int sz = sizeof(a) / sizeof(a[0]);
//	printf("%d\n",sz);
//}
//int main() {
//	int a[10] = { 0 };
//	test1(a);
//	return 0;
//}