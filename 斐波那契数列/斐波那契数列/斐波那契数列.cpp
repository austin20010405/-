// 斐波那契数列.cpp : 定义控制台应用程序的入口点。
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
	printf("请输入要求的数:\n");
	scanf("%d",&n);
	printf("第%d数值是%d\n",n,math(n));
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
	printf("请输入你要的数：");
	scanf("%d", &x);
	printf("%d", math(x));
	getchar();
	return 0;
}*/