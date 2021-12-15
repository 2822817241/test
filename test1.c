#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	printf("比特\n");
//	printf("你好呀\n");
//	printf("%d\n",100);
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(short));
//	printf("%d\n",sizeof(long));
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(float));
//	printf("%d\n",sizeof(double));
//	printf("%d\n",sizeof(long long));
//	int age = 20;
//	double weight = 53.5;
//	age = age + 1;
//	weight = weight - 5;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	//%d - int
//	//%f - flout
//	//%lf - double
//	return 0;
//}

//int a = 100;  //全局变量
//
//int main()
//{
//	int a = 10; //局部变量
//	printf("%d\n", a);
//	//当局部变量和全局变量名字冲突的情况下，局部优先
//	//不建议把全局变量和局部变量的名字写成一样的
//
//	return 0;
//}

//写一个代码，求两个整数之和
//scanf函数是输入函数
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("%d\n",sum);
	return 0;
}