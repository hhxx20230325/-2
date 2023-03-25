#include<stdio.h>


double pow(int a, int b) {
	if (b<0) {
		return (1.0 / pow(a, -b));
	}
	if (b==0) {
		return 1;
	}
	else {
		return a * pow(a,b-1);
	}
	return 0;
}
int main() {
	int n = 0;
	int k = 0;
	scanf_s("%d%d",&n,&k);
	double a = pow(n,k);
	printf("%lf",a);
	return 0;
}


//int DigitSum(unsigned int num) {
//	if (num>10)
//	{
//		return num % 10 + DigitSum(num / 10);
//	}
//	return num;
//}
//int main() {//递归求每位数之和
//	unsigned int num = 0;
//	scanf_s("%d",&num);
//	int ret = DigitSum(num);
//	printf("%d\n",ret);
//	return 0;
//}


//#include<string.h>
//void reverse_string(char a[]) {//递归将字符串倒序
//	char temp = a[0];
//	int len = strlen(a);
//	a[0] = a[len - 1];
//	a[len - 1] = '\0';
//	if (strlen(a+1)>=2) {
//		reverse_string(a + 1);
//	}
//	a[len - 1] = temp;
//}
//int main() {
//	char a[] = "abcdefg";
//	reverse_string(a);
//	printf("%s\n",a);
//	return 0;
//}







//void get_jo(int a) {
//	int count = 0;
//	int count2 = 0;
//	while (a) {
//		if (a & 1) {
//			count++;
//		}a = a >> 1;
//	}
//	printf("奇数为:%d\n",count);
//	printf("偶数为:%d",32-count);
//}
//int main() {
//	int a = 0;
//	scanf_s("%d",&a);
//	get_jo(a);
//	return 0;
//}


//int count_bit(int a) {//通过与(&)来求数二进制1的个数
//	int count = 0;
//	while (a) {
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int count_bit(int a) {
//	int b = 1;
//	int count = 0;
//	for (int i = 0; i < 32;i++) {
//		if (a & b == 1) {
//			count++;
//		}a = a >> 1;
//	}
//	return count;
//}
//int main() {
//	int a = 0;
//	scanf_s("%d",&a);
//	int sum=count_bit(a);
//	printf("1的总数为:%d\n",sum);
//	return 0;
//}



//#include<string.h>
//int main() {
//	char a[] = "123";
//	char b[] = {'1','2','3'};
//	printf("%d\n",sizeof(a)/sizeof(char));
//	printf("%d\n", sizeof(b) / sizeof(char));
//	return 0;
//}


//int main() {//p等于数组的时候，*p指的是时数组首个的位置
//	int a[] = { 1,2,3,4,5,6,7,8 };
//	int* p;
//	p = a;
//	printf("%d\n",*p);
//	printf("%d\n",*(p+7));
//	return 0;
//}


//int strlen(char* a) {//求字符串中字符的个数第三种方法
//	int count = 0;
//	char* start=a;
//	char* end = a;
//	while (*end!='\0') {
//		end++;
//	}
//	return end-start;
//}
//int main() {
//	char a[] = "123";
//	int count = strlen(a);
//	printf("%d\n",count);
//	return 0;
//}




//int main() {//指针相减，中间个数
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",&a[9]-&a[0]);
//	return 0;
//}



//int* test() {//指针指向的空间释放，返回不回去
//	int a = 10;
//	return &a;
//}
//int main() {
//	int* p = test();
//	*p = 20;
//	printf("%d",*p);
//	return 0;
//}




//int main() {//指针越界
//	int a[10] = { 0 };
//	int* p = a;
//	int i = 0;
//	for (i = 0; i < 12;i++) {
//		p++;//会越界
//	}
//	return 0;
//}





//int main() {
//	//int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化随机量
//	*p = 20;
//	return 0;
//}



//int main() {//指针类型决定改变地址大小
//	int a[10] = { 0 };
//	char* p = a;//每次只改变一个地址
//	//int* p = a;//每次只改变4个地址
//	int i = 0;
//	for (i = 0; i < 10;i++) {
//		*(p + i) = 1;
//	}
//	for (i = 0; i < 10;i++) {
//		printf("%d\n",*(p+i));
//	}//这个看不出，要看内存
//	return 0;
//}


//int main(){//指针类型决定：指针走一步走多远
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n",pa);
//	printf("%p\n",pa+1);
//	printf("%p\n",pc);
//	printf("%p\n",pc+1);
//	return 0;
//}








//int main() {//指针类型决定访问空间大小
//	int a = 0x11223344;
//	int* pa = &a;//访问4个字节的空间大小
//	*pa = 0;
//	char* pc = &a;//访问1个字节的空间大小
//	*pc = 0;
//	return 0;
//}


//int main() {
//	int a = 10;
//	int b = 20;
//	int* p;
//	p = &a;
//	printf("%p\n",p);
//	printf("%d\n",*p);
//	printf("%p\n",&a);
//	p = &b;
//	printf("%p\n",p);
//	printf("%d\n",*p);
//	printf("%p\n",&b);
//	return 0;
//}