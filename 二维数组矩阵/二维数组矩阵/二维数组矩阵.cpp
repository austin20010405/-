// ��ά�������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<stdio.h>
#include<cstdlib>
int a = 0, b = 0,zhu[20][20],dai=0,min=100000000000;//a����߶ȣ�bΪ�����ȣ�
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
	printf("���������鳤��:");
	scanf("%d",&a);
	printf("�����������ȣ�");
	scanf("%d",&b);
	printf("���������");
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