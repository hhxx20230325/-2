#include<stdio.h>
//#define max(a,b) (a>b?a:b) 
//#include<math.h>


//int main() {
//
//	return 0;
//}



//int main() {//printf中输出是字符个数
//
//	printf("%d",printf("%d", printf("%d", 433)));
//}
//




//int main() {//用到strlen
//	char a[] = "123";
//	printf("%d",strlen(a));
//	return 0;
//}




//is_prime(int x) {
//	for (int i = 2; i < sqrt(x); i++) {
//		if (x%i==0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//int main() {//求100到200素数
//	int count = 0;
//	for (int i = 100; i <= 200;i++) {
//		if (is_prime(i) == 1) {
//			printf("%d\n",i);
//			count++;
//		}
//	}
//	printf("count:%d",count);
//	return 0;
//	}



//void swap(int* a,int* b) {
//	int t=0 ;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
//
//int main() {俩个数交换
//	int a = 10;
//	int b = 20;
//	swap(&a,&b);
//	printf("%d:%d",a,b);
//	return 0;
//}




//int main() {
//	int a = 10;
//	int b = 20;
//	int x = max(a,b);
//	printf("%d",x);
//	return 0;
//}




//int main() {
//	char a[] = "hello world";
//	memset(a,'*',5);
//	printf("%s",a);
//	return 0;
//}



//int main() {//strcpy()进行代换
//	char a1[] = "bit";
//	char a2[] = "########";
//	strcpy(a2,a1);
//	printf("%s",a2);
//	return 0;
//}





//typedef struct stu {
//	int id;
//	char name[21];
//	char sex;
//	int age;
//	int score;
//	char add[51];
//}student;
//void m1(student* s,int len) {
//	int i, j;
//	for (i = 0; i < len;i++) {
//		student* s1 =s;
//		for (j = 0; j < len-i-1;j++) {
//			if (s[j].age>s[j+1].age) {
//				*s1 = s[j + 1];
//				s[j+1] = s[j ];
//				s[j] = *s1;
//			}
//		}
//	}
//}
//int main() {
//	student s[3] = {
//		{1,"1xiaoxuesheng",'F',20,99,"北京市昌平区"},
//		{2,"2xiaoxuesheng",'M',40,88,"北京市昌平区"},
//		{3,"3xiaoxuesheng",'F',30,77,"北京市昌平区"}
//	};
//	for (int i = 0; i < 3;i++) {
//		printf("编号为:%d  ",s[i].id);
//		printf("姓名为:%s  ",s[i].name);
//		printf("性别为:%c  ",s[i].sex);
//		printf("年龄为:%d  ",s[i].age);
//		printf("分数为:%d  ",s[i].score);
//		printf("地址为:%s\n",s[i].add);
//	}
//	void m1(s);
//	for (int i = 0; i < 3; i++) {
//		printf("编号为:%d  ", s[i].id);
//		printf("姓名为:%s  ", s[i].name);
//		printf("性别为:%c  ", s[i].sex);
//		printf("年龄为:%d  ", s[i].age);
//		printf("分数为:%d  ", s[i].score);
//		printf("地址为:%s\n", s[i].add);
//	}
//	return 0;
//}








//#include<string.h>
//struct stu {
//	int id;
//	char name[51];//一个中文俩个字符
//	char sex;
//	int age;
//	int score;  
//	char address[51];
//};
//int main() {
//	struct stu ss = {1001,"传音",'F',18,100,"江西省南昌市"};
//	ss.id = 1002;
//	//ss.name = "小学生";这样不可以
//	strcpy(ss.name, "小学生");
//	printf("成员编号:%d\n",ss.id);
//	printf("成员姓名:%s\n",ss.name);
//	printf("成员性别:%c\n",ss.sex);
//	printf("成员年龄:%d\n",ss.age);
//	printf("成员分数:%d\n",ss.score);
//	printf("成员编号:%s",ss.address);
//	return 0;
//}




//typedef unsigned int ui;//对已存在的数据类型起别名
//int main() {
//	ui a = 10;
//	printf("%d",a);
//	return 0;
//}



//int main() {
//	int i = 0;
//	int a = 10;
//	int b = 20;
//	int* arr[] = {&a,&b};
//	*arr[1] = 123;
//	printf("%d\n",*arr[0]);
//	printf("%d",*arr[1]);
//	return 0;
//}






//int main() {
//	int arr[] = {1,2,3,4,5,6,7,8};
//	int* p;
//	p = arr;
//	for (int i = 0; i < sizeof(arr) / sizeof(int);i++) {
//		printf("%d\n",p[i]);
//	}
//	printf("%p\n",p);
//	printf("%p\n",arr);
//	printf("%p\n",&arr[1]);
//	printf("%p\n",p+1);
//	return 0;
//}