// noi2014年循环.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
#include<cstdlib>
#include<iostream>
using namespace std;

int fun(int n, int minNum, int maxNum)
{
	int tot, i;
	if (n == 0)
	{
		return 1;
	}
	tot = 0;
	for (i = minNum; i <= maxNum; i++)
	{
		tot += fun(n - 1, i + 1, maxNum);
	}
	return tot;
}
int main()
{
	int n, m;
	cin >> n>>m;
	printf("%d\n", fun(m, 1, n));
	system("pause");
    return 0;
}
//n=6 m=3

