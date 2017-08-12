// 指针.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>


int main()
{
	int p[1];
	
	printf("please input a number:");
	scanf("%d", p);
	int *a,i;
	a = &p[0];
	for (i = 0; i < 1; i++)
	{
		printf("%d", *(a+i));
	}
	getchar();
    return 0;
}

/*int main()
{
	int a,b;
	int*ipointer1, *ipointer2;
	scanf("%d", &a, &b);
	ipointer1 = &a;
	ipointer2 = &b;
	printf("thenumber is%d\n", *ipointer1, *ipointer2);
}*/