#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


int main2() {
	int a = 3;
	int b = 5;
	int c = a ^ b;//^���Ǵη��������
	//a 011
	//b 101
	
	return 0;
}







//int main() {
//	int a = 4;
//	int b = a >> 2;
//	printf("%d\n",b);
//	return 0;
//}






//int main() {
//	int a[10] = { 1,1,3,3,3,3,4,4,4,4 };
//	for (int i = 0; i < 9; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	
//	return 0;
//}







//int main() {
//	printf("��Ҫ�ú�ѧϰ��?(1/0):");
//	int a = 0;
//	scanf_s("%d",&a);
//	if (a==1) {
//		printf("�����Ȣ������");
//	}
//	else {
//		printf("��ש��");
//	}
//	return 0;
//}







//int main() {
//	//  /132Ϊ8����ת���ַ�
//	//  /x32Ϊ16����ת���ַ�
//	printf("%c\n",'\x32');
//	return 0;
//}



//int main() {
//	char arr1[]="abc";
//	char arr2[] = {'a','b','c','\0'};
//	printf("%d\n",strlen(arr1));//strlenΪ�ַ�������
//	printf("%d\n",strlen(arr2));
//	return 0;
//}









//4.ö�ٳ�����ö������Ķ����ǲ��ܸģ�
//enum Sex {
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main() {
//	enum Sex s = FEMALE;//��������޸�
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//	return 0;
//}
//3.����ı�ʶ������
//#define max 10
//int main() {
//
//	int array[max] = { 0 };
//	printf("%d",max);
//	return 0;
//}



//int main() {
//	const int num1 = 3;//2.������
//	printf("%d\n",num1);
// 3;//1.���泣��
//	num1 = 4;
//	printf("%d\n%d",num1);
//	return 0;
//}