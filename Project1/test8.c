#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>
//int main() {
//	char input[20];
//	//shutdown -s -t 60	 ���Խ���60���ػ�
//	//shutdown -a  ȡ���ػ�
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬���ĵ��Խ���1�����ڹػ���������:��������ȡ���ػ�\n������:");
//	scanf("%s",input);
//	if (strcmp(input,"������")==0) {
//		system("shutdown -a");
//	}
//	else {
//		goto again;
//	}
//	return 0;
//}


//int main() {//�����
//	int ret = 0;
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 10;i++) {
//		ret = rand() % 10 + 1;
//		printf("%d\n", ret);
//	}
//	return 0;
//}



//int main() {//�žų˷���
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






//int main() {�ϸ�Ч��������
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


//int main() {��Ч��������
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



//int main() {//��Ч����������ֻ�ܱ�1�������������Գ���
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



//int main() {//�����꣨�ܱ�400���� �� ��4���������ܱ�100������
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