// 动态规划过河问题.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include<cstdlib>

int a, b[101], e,temp;
int han(int i)
{
	if (i = 1)
	{
		e += b[1];
		return;
	}
	if (i = 2)
	{
		e += b[2];
	}
	if (i = 3)
	{
		e += b[1] + b[2] + b[3];
	}
	if (b[2] + b[1] + b[i] + b[2]<b[1] + b[i] + b[i - 1] + b[1])
	{
		e += b[2] + b[1] + b[i] + b[2];
		han(i - 2);
	}
	else
	{
		e += b[i] + b[1] + b[i - 1] + b[1];
		han(i - 2);
	}
}

int main()
{

	scanf("%d", &a);
	for (int c = 1; c <= a; c++)
	{
		scanf("%d", &b[c]);
	}
	for (int i = 1; i <= a; i++)
	{
		for (int k = 1; k <= a; k++)
		{
			if (b[k] > b[k + 1])
			{
				temp = b[k];
				b[k] = b[k + 1];
				b[k + 1] = temp;
			}
		}
	}
	han(a);
	printf("%d", &e);
	return 0;
}