#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	printf("����\n");
//	printf("���ѽ\n");
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

//int a = 100;  //ȫ�ֱ���
//
//int main()
//{
//	int a = 10; //�ֲ�����
//	printf("%d\n", a);
//	//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
//	//�������ȫ�ֱ����;ֲ�����������д��һ����
//
//	return 0;
//}

//дһ�����룬����������֮��
//scanf���������뺯��
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