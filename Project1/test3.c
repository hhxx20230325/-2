#include<stdio.h>

struct Book
{
	char name[20];
	short price;
};
int main3() {
	struct Book b1 = {"c语言程序设计",55};
	/*printf("书名:%s\n价格:%d元\n",b1.name,b1.price);
	b1.price = 20;
	printf("打折后:\n书名:%s\n价格:%d元", b1.name, b1.price);
	*/

	strcpy(b1.name,"c++");
	printf("%s",b1.name);
	/*struct Book* pb = &b1;
	printf("%s\n",pb->name);*/
	//printf("%s\n%d\n",(*pb).name,(*pb).price);
	return 0;
}



//int main() {
//	
//
//	printf("%d\n",sizeof(int*));
//	printf("%d\n",sizeof(float*));
//	printf("%d\n",sizeof(short*));
//	return 0;
//}

//int main() {
//	int a = 10;
//	//printf("%p\n",&a);
//	int* p = &a;
//	*p = 30;//间接访问指针变量
//	printf("%p\n",&a);
//	printf("%d\n",a);
//}


//#define Max(x,y) x>y?x:y
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = Max(10,20);
//	printf("%d",max);
//	return 0;
//
//}





//extern 全局变量
//void test() {
//	static int a = 1;//修饰局部变量
//	a++;
//	printf("a=%d\n",a);
//}
//int main() {
//	int i = 0;
//	while (i<5) {
//		test();
//		i++;
//	}
//
//	return 0;
//}


//int main() {
//	typedef  int u_int;
//	 int a = 10;
//	 u_int b = 20;
//	printf("%d\n",a);
//	printf("%d\n",b);
//	return 0;
//}