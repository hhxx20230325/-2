#include<stdio.h>


int main1() {
	char a[] = {"welcome to bit!!!!!!"};
	char b[] = {"####################"};
	int left = 0;
	int right = sizeof(a) / sizeof(char)-2;
	int sum = right;
	while (left <= right) {
		
		b[left] = a[left];
		b[right] = a[right];
		printf("%s\n",b);
		left++, right--;
	}
	return 0;
}





//int main(){//c语言二分查找
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 9;
//	int s = sizeof(arr) / sizeof(int);
//	int left = 0;
//	int right = s - 1;
//	while (1)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k) {
//			right = mid-1 ;
//		}
//		else if (arr[mid]<k) {
//			left = mid ;
//		}
//		else{
//			printf("%d",mid);
//			break;
//		}
//	}
//	return 0;
//}


//int main() {//字符串第三种输入方法
//	
//	char a[10];
//	scanf("%s",&a);
//	printf("%s",a);
//	return 0;
//}



//int main() {//字符串第二种输入方式
//	char a[10];
//	char c = 0;
//	int i = 0;
//	while ((c = getchar())!='\n') {
//		a[i] = c;
//		i++;
//	}
//	a[i] = '\0';
//	printf("%s",a);
//	return 0;
//}

//int main() {
//	char arr[10];
//	gets(arr);//字符串第一种输入方式
//	printf("%s",arr);
//	return 0;
//}




//int main() {//c语言中求数组长度
//	int a[]={1,2,3,4,5,6};
//	int s = sizeof(a) / sizeof(int);
//	printf("%d",s);
//	return 0;
//}





//int main() {//while循环求阶乘
//	int sum = 0;
//	int x = 0;
//	scanf_s("%d", &x);
//	while (x>0)
//	{
//		sum *= x;
//		x--;
//	};
//	printf("的阶乘为:%d",sum);
//}






//int sum = 1;
//int jc(int x) {//用递归求阶乘
//	sum *= x;
//	if (x == 1)return sum;
//	return jc(--x);
//}
//int main() {
//	
//	printf("输入:");
//	int n = 0;
//	scanf_s("%d",&n);
//	int s = jc(n);
//	printf("所求%d的阶乘为:%d",n,s);
//	return 0;
//}



//int main() {//for循环求阶乘
//	int n = 0;
//	int sum = 1;
//	printf("请输入被求阶乘数:\n");
//	scanf_s("%d", &n);
//	for (; n > 0;n--) {
//		sum *= n;
//	}
//	printf("被求数为:%d",sum);
//	return 0;
//}