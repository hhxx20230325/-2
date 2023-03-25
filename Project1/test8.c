#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>
//int main() {
//	char input[20];
//	//shutdown -s -t 60	 电脑将在60秒后关机
//	//shutdown -a  取消关机
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，您的电脑将在1分钟内关机，如输入:我是猪，就取消关机\n请输入:");
//	scanf("%s",input);
//	if (strcmp(input,"我是猪")==0) {
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}


//int main() {//随机数
//	int ret = 0;
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 10;i++) {
//		ret = rand() % 10 + 1;
//		printf("%d\n", ret);
//	}
//	return 0;
//}



//int main() {//九九乘法表
//	int i = 1;
//	int j;
//	for (; i < 10; i++) {
//		for (j= 1; j < i + 1;j++) {
//			printf("%d*%d=%-2d  ",i,j,i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}






//int main() {较高效率求素数
//	int count = 0;
//	for (int num = 101; num <= 200; num+=2) {
//		int j=0 ;
//		for ( j = 2; j < sqrt(num); j++) {
//			if (num%j==0) {
//				break;
//			}
//		}
//		if (j>sqrt(num)) {
//			count++;
//			printf("%d\n",num);
//		}
//	}
//	printf("count:%d",count);
//	return 0;
//}


//int main() {中效率求素数
//	int count = 0;
//	clock_t s, e;
//	s = clock();
//	for (int num = 100; num <= 200;num++) {
//		int j = 0;
//		int judge = 1;
//		for (int j = 2; j < num;j++) {
//			if (num%j==0&&j<num) {
//				judge = 0;
//			}
//		}
//		if (judge==1) {
//			count++;
//			printf("%d\n",num);
//		}
//	}
//	printf("count:%d",count);
//	e = clock();
//	double d = (double)(e - s);
//	printf("s_time%lf",d);
//	return 0;
//}



//int main() {//低效率求素数（只能被1和自身整除）试除法
//	int count = 0;
//	for (int num = 100; num < 201;num++) {
//		int  j=0;
//		for ( j = 2; j < num;j++) {
//			if (num%j==0) {
//				break;
//			}
//		}
//		if(j==num){
//			count++;
//			printf("%d\n",num);
//		}
//	}
//	printf("count:%d",count);
//	return 0;
//}



//int main() {//求闰年（能被400整除 或 被4整除但不能被100整除）
//	int year ;
//	int count=0;
//	for (year = 1000; year <= 2000;year++) {
//		if (year%4==0&&year%100!=0) {
//			printf("%d\n", year); count++;
//		}
//		else if(year%400==0) {
//			printf("%d\n", year); count++;
//		}
//	}
//	printf("count:%d",count);
//	return 0;
//}