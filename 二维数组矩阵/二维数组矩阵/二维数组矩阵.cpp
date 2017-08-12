// 二维数组矩阵.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
#include<cstdlib>
int a = 0, b = 0,zhu[20][20],dai=0,min=100000000000;//a矩阵高度，b为矩阵宽度；
void han(int x,int y,int he)
{
	if (x == 0 &&y == 0)
	{
		he = zhu[0][0];
	}
	if (x == (a-1)&&y == (b-1))
	{
	if (he<min)
	{
		min = he;
	}
		return;
	}
	if (x == (a-1)&&y < (b-1))
	{
		he += zhu[x][y];
		han(x, y + 1, he);
	}
	if (y == (b-1)&&x < (a-1))
	{
		he += zhu[x][y];
		han(x+1, y, he);
	}
	if (x<(a-1)&&y<(b-1))
	{
		he += zhu[x][y];
		han(x + 1, y, he);
		han(x, y + 1, he);
	}
}
int main()
{
	printf("请输入数组长度:");
	scanf("%d",&a);
	printf("请输入数组宽度：");
	scanf("%d",&b);
	printf("请输入矩阵：");
	for (int i = 0; i < a; i++)
	{
		for (int q = 0; q < b; q++)
		{
			scanf("%d", &zhu[i][q]);
		}
	}
	han(0,0,0);
	printf("%d", min);
	system("pause");
	return 0;
}