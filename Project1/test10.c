#include<stdio.h>

//int Fib(int n) {//�ݹ���쳲���������
//	if (n <= 2) {
//		return 1;
//	}
//	else return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n) {
//		int a = 1;
//		int b = 1;
//		int c = 1;
//		while (n>2) {
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//}
//
//int main() {
//	int n = 0;
//	scanf_s("%d",&n);
//	int ret = Fib(n);
//	printf("%d",ret);
//	return 0;
//}





//int factorial(int x) {//�ݹ���׳�
//	if(x>1){
//		return (x)*factorial(x-1);
//	}
//	else return 1;
//}
//
//int main() {//��׳�
//	int n = 0;
//	scanf_s("%d",&n);
//	int x=factorial(n);
//	printf("%d�Ľ׳�Ϊ: %d",n,x);
//	return 0;
//}



//int my_strlen(char* a) {//����ʱ����
//	int count = 0;
//	while (*a!='\0') {
//		count++;
//		a++;
//	}
//	return count;
//}

//int my_strlen(char* a) {//�õݹ����ַ�����
//	if (*a!='\0') 
//		return 1 + my_strlen(a+1);
//	else
//		return 0;
//}
//int main() {
//	char a[] = "123333";
//	int len = my_strlen(a);
//	printf("�ַ�����Ϊ: %d",len);
//	return 0;
//}




//void print(int n) {//�õݹ齫�������ÿλ�����
//	if (n>9) {
//		print(n/10);
//	}
//	printf("%d ",n%10);
//}
//int main() {
//	unsigned  int num = 0;
//	scanf_s("%d",&num);
//	print(num);
//	return 0;
//}


//int main() {//stack overflowջ���
//	static int i = 1;
//	printf("%d\n",i++);
//	main();
//	return 0;
//}