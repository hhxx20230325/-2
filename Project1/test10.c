#include<stdio.h>

//int Fib(int n) {//递归求斐波那契数列
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





//int factorial(int x) {//递归求阶乘
//	if(x>1){
//		return (x)*factorial(x-1);
//	}
//	else return 1;
//}
//
//int main() {//求阶乘
//	int n = 0;
//	scanf_s("%d",&n);
//	int x=factorial(n);
//	printf("%d的阶乘为: %d",n,x);
//	return 0;
//}



//int my_strlen(char* a) {//带临时变量
//	int count = 0;
//	while (*a!='\0') {
//		count++;
//		a++;
//	}
//	return count;
//}

//int my_strlen(char* a) {//用递归求字符长度
//	if (*a!='\0') 
//		return 1 + my_strlen(a+1);
//	else
//		return 0;
//}
//int main() {
//	char a[] = "123333";
//	int len = my_strlen(a);
//	printf("字符长度为: %d",len);
//	return 0;
//}




//void print(int n) {//用递归将输入的数每位都输出
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


//int main() {//stack overflow栈溢出
//	static int i = 1;
//	printf("%d\n",i++);
//	main();
//	return 0;
//}