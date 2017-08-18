// 动态规划过河.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<stdio.h>#include<cstdlib>int a, b[101], temp, e;void han(int i){	if (i = 1)	{		e += b[1];		return;	}	if (i = 2)	{		e += b[2];		return;	}	if (i = 3)	{		e += b[1] + b[2] + b[3];		return;	}	if (b[2] + b[1] + b[i] + b[2] > b[i] + b[1] + b[i - 1] + b[1])	{		e += b[i] + b[1] + b[i - 1] + b[1];		han(i - 2);	}	else	{		e += b[2] + b[1] + b[i] + b[2];		han(i - 2);	}}int mian(){	e = 0;	b[0] = 0;	printf("%d", &a);	for (int i = 0; i <= a; i++)	{		scanf("%d", &b[i]);	}	for (int j = 1; j <= a; j++)	{		for (int h = 1; h <= a; h++)		{			if (b[h]>b[h + 1])			{				b[h] = temp;				b[h] = b[h + 1];				b[h + 1] = temp;			}		}	}	han(a);	printf("%d", e);	system("pause");	return 0;}


