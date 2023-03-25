#include<stdio.h>

//int main() {//getchar和putchar的使用
//	int ch = 0;//ctrl+z 可以终止
//	while ((ch=getchar())!=EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}



//int main() {//测试while无限循环
//	int i = 0;
//	while (1) {
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}



//int main() {//精准判断switch执行过程
//	int n = 1;
//	int m = 2;
//	switch (n) {
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;
//		}
//	case 4:m++;
//	default:
//		break;
//	}
//	printf("m=%d  n=%d",m,n);//5，3
//	return 0;
//}





//int main() {//switch语句的使用
//	int day = 0;
//	scanf_s("%d",&day);
//	switch (day)
//	{
//	case 1:printf("今天星期一"); break;
//	case 2:printf("今天星期2"); break;
//	case 3:printf("今天星期3"); break;
//	case 4:printf("今天星期4"); break;
//	case 5:printf("今天星期5"); break;
//	case 6:printf("今天星期6"); break;
//	default:
//		printf("7");
//		break;
//	}
//	return 0;
//}


//int main() {//水仙花
//	int i = 100;
//	
//	while (i<1000)
//	{
//		int a = i / 100;
//		int b = (i % 100)/10;
//		int c = (i % 100) % 10;
//		if (a*a*a+b*b*b+c*c*c==i) {
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}







//int main() {//100内奇数
//	int i = 0;
//	for (; i < 100;i++) {
//		if (i%2==1) {
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//}





//int main() {
//	int a = 0;
//	int b = 2;
//	if (a==1) 
//		if (b==2) 
//			printf("123");
//		
//	else {
//		printf("234");
//	}
//	return 0;
//}









//int main(){
//	int age;
//	scanf_s("%d",&age);
//	printf("%d",age);
//	return 0;
//}