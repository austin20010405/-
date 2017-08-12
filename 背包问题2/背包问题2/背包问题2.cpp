// 背包问题2.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<stdio.h>
#include<cstdlib>
int a, b, c, n;
int zhu[101][3], cun[101][3];
int main()
{
	zhu[0][0] = 0;
	scanf("%d%d", &a, &b);
	for (int i = 1; i <= b; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			scanf("%d",&zhu[i][j]);
		}
	}
	for (int k = 1; k <= b; k++)
	{
		cun[1][k] = (k / zhu[1][1])*zhu[1][2];
	}
	for (int l = 2; l <= a; l++)
	{
		for (int m = 1; m <= b; m++)//m为体积
		{
			n = m / zhu[l][1];//n为能塞进的最大倍数
			int x = -1;
			for (int o = 1; o <= n; o++)
			{
				if (zhu[l][2] * o + cun[m - o*(zhu[l][1])][2] > x)
				{
					x = zhu[l][2] * o + cun[m - o*(zhu[l][1])][2];
				}
			}
			cun[l][m] = x;
			if (cun[l][m] < cun[l - 1][m])
			{
				cun[l][m] = cun[l - 1][m];
			}
		}
	}
	printf("%d", cun[a][b]);
	system("pause");
	return 0;
}


