#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



//int main() {
//	float a = .33;
//	printf("%f",a);
//	return 0;
//}




//int main() {
//	char a[] = "2534444";
//	char b[] = "23466666";
//	int ret = strcmp(a,b);
//	printf("%d\n",ret);
//	return 0;
//}



//int main() {��������ĵ�ַ
//
//	int a[] = {1,3,3,4,5,6};
//	int* p = a;
//	printf("%d\n",*p);
//	p=p+3;
//	printf("%d\n",*p);
//	return 0;
//}


//int main() {//�ַ�����ַ
//	char a[] = "123123123";
//	char* p = a;
//	printf("%c\n",*p);
//	p+3;
//	printf("%c\n",*p);
//	return 0;
//}



//const����ָ�������*��ߣ����ε���*p��Ҳ����˵:����ͨ��p���ı�*p(num)��ֵ
//����*p���ұ�ʱ�����ܸı�p;
//int main() {
//	const int num = 10;
//	int* const  p = &num;
//	*p = 20;
//	printf("%d\n",*p);
//	return 0;
//}



//



//void my_strcpy(char* dest, char* src) {//strcpy���÷�
//	while (*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//}
//int main() {
//	char a[] = "###########";
//	char b[] = "bit";
//	my_strcpy(a,b);
//	printf("%s\n",a);
//	printf("%s\n",b);
//	return 0;
//}




//int main() {
//	for (int i = 0; i < 100; i++)
//	{
//		printf("%d\n",i);
//	}
//	return 0;
//}