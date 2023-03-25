#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


int main2() {
	int a = 3;
	int b = 5;
	int c = a ^ b;//^不是次方，是异或
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
//	printf("你要好好学习吗?(1/0):");
//	int a = 0;
//	scanf_s("%d",&a);
//	if (a==1) {
//		printf("你可以娶老婆了");
//	}
//	else {
//		printf("搬砖吧");
//	}
//	return 0;
//}







//int main() {
//	//  /132为8进制转义字符
//	//  /x32为16进制转义字符
//	printf("%c\n",'\x32');
//	return 0;
//}



//int main() {
//	char arr1[]="abc";
//	char arr2[] = {'a','b','c','\0'};
//	printf("%d\n",strlen(arr1));//strlen为字符串长度
//	printf("%d\n",strlen(arr2));
//	return 0;
//}









//4.枚举常量（枚举里面的东西是不能改）
//enum Sex {
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main() {
//	enum Sex s = FEMALE;//这里可以修改
//	printf("%d\n",MALE);
//	printf("%d\n",FEMALE);
//	printf("%d\n",SECRET);
//	return 0;
//}
//3.定义的标识符常量
//#define max 10
//int main() {
//
//	int array[max] = { 0 };
//	printf("%d",max);
//	return 0;
//}



//int main() {
//	const int num1 = 3;//2.常常量
//	printf("%d\n",num1);
// 3;//1.字面常量
//	num1 = 4;
//	printf("%d\n%d",num1);
//	return 0;
//}