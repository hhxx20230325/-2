#include<stdio.h>







//int main() {//写代码需要规范
//	int c = 1;
//	int b = (c+ --c);
//	printf("%d\n",b);
//	return 0;
//}



//int main() {
//	char c = 1;
//	printf("%u\n",sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}


//struct stu {
//	int id;
//	char name[40];
//};
//int main() {
//	struct stu s1 = {1,"zhangsan"};
//	struct stu* p1 = &s1;
//	printf("%d\n",p1->id);
//	return 0;
//}




//int main() {
//	int a[10] = { 0 };
//	char b[10] = { 0 };
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(b));
//	printf("%d\n",sizeof(a[0]));
//	printf("%d\n",sizeof(b[0]));
//	return 0;
//}




//int main() {
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n",a);
//	a = a & ~(1 << 2);
//	printf("%d\n",a);
//	//int a = 0;
//	//~按2进制位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111-补码
//	//11111111111111111111111111111110-反码
//	//10000000000000000000000000000001-原码
//	//-1
//	printf("%d\n",~10);
//	return 0;
//}


//int main() {//sizeof中的运算符不运算
//	short s = 0;
//	int a = 10;
//	printf("%d\n",sizeof(s=a+5));
//	printf("%d\n",s);
//	return 0;
//}


//int main() {
//	int b = 2;
//	b++ == 2;
//	printf("%d",b);
//	return 0;
//}



//int main() {//2进制有多少个1
//	int a = 0;
//	int count = 0;
//	int b = 1; 
//	scanf_s("%d", &a);
//	for(int i=0;i<32;i++)
//	{
//		int c = a & b;
//		if (c==1) {
//			count++;
//		}
//		a = a >> 1;
//	}
//	printf("%d\n",count);
//	return 0;
//}




//int main() {
//	int a = 3;
//	int b = 5;
//	//加减法，可能会溢出
//	/*a = b + a;
//	b = a - b;
//	a = a - b;*/
//
//	//异或的方法
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d",a,b);
//	return 0;
//}



//int main(){
//	//& --按2进制位与
//	int a = 13;
//	int b = 7;
//	//int c = a & b;
//	//00000000000000000000000000001101
//	//00000000000000000000000000000111
//	//00000000000000000000000000000101
//
//	//| --按2进制位或
//	//int c = a | b;
//	//00000000000000000000000000001101
//	//00000000000000000000000000000111
//	//00000000000000000000000000001111
//
//	//^ --按2进制位异或
//	//相同为0，想异为1
//	int c = a ^ b;
//	//00000000000000000000000000001101
//	//00000000000000000000000000000111
//	//00000000000000000000000000001010
//	printf("%d\n",c);
//
//	return 0;
//}



//整数右移左移
//int main() {//正整数的原码，反码，补码相等
//	int a = 3;
//	//原码:10000000000000000000000000000111
//	//反码:11111111111111111111111111111000补码=反码+1
//	//补码:11111111111111111111111111111001
//	int b = a << 1;
//	printf("%d",b);
//	return 0;
//}