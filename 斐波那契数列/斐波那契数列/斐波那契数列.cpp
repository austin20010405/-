// 쳲���������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<stdio.h>


int math(int x)
{
	int num = 0;
	if (x == 1 || x == 2)
	{
		return 1;
	}
	else
	{
		return math(x - 1) + math(x - 2);;
	}
	int n;
}
int main()
{
	int n;
	printf("������Ҫ�����:\n");
	scanf("%d",&n);
	printf("��%d��ֵ��%d\n",n,math(n));
	return 0;
}
/*int math(int x)
{
	int a = 1, b = 1, c = 2,i;
	for (i = 0; i < x; i++) 
	{
		printf("%d",a);
		a = b;
		b = c;
		c = a + b;

	}
}
int main()
{
	int x;
	printf("��������Ҫ������");
	scanf("%d", &x);
	printf("%d", math(x));
	getchar();
	return 0;
}*/